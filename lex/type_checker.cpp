#include "type_checker.h"

#include <boost/lexical_cast.hpp>
#include <boost/variant.hpp>
#include "bison/front.h"
#include "bison/static.h"
#include "table.h"
#include "type.h"

using std::string;
using std::vector;

namespace lex
{
    TypeChecker::TypeChecker() : is_input_(false), is_loop_(false),
        kAstTrue_(newtf(kDefaultLocation, true)), visitor_(*this)
    {

    }

    VType lex::TypeChecker::GetType(ast_t idx)
    {
        ast &node = astV[idx];
        auto loc = GetLocation(idx);
        switch (node.type)
        {
            VType l, r;
        case NodeType::ADD:
            l = GetType(node.left);
            r = GetType(node.right);
            if (l != r)throw TypesNotCompatible(loc);
            if (l == VType::NUMERIC || l == VType::TEXT)return l;
            throw InvalidTypeOperation(loc);
        case NodeType::SUB:
        case NodeType::MUL:
        case NodeType::DIV:
            l = GetType(node.left);
            r = GetType(node.right);
            if (l != r)throw TypesNotCompatible(loc);
            if (l == VType::NUMERIC)return l;
            throw InvalidTypeOperation(loc);
        case NodeType::AND:
        case NodeType::OR:
            l = GetType(node.left);
            r = GetType(node.right);
            if (l != r)throw TypesNotCompatible(loc);
            if (l == VType::TF)return l;
            throw InvalidTypeOperation(loc);
        case NodeType::NOT:
            l = GetType(node.left);
            if (l == VType::TF)return l;
            throw InvalidTypeOperation(loc);
        case NodeType::BAR:
            l = GetType(node.left);
            r = GetType(node.right);
            if (r == VType::TEXT)throw InvalidTypeOperation(loc);
            return l;
        case NodeType::UMINUS:
        case NodeType::UPLUS:
            l = GetType(node.left);
            if (l == VType::NUMERIC)return l;
            throw InvalidTypeOperation(loc);
        case NodeType::NUMERIC:
            try
            {
                node.dv = boost::lexical_cast<double>(strVector[node.idx]);
            }
            catch (boost::bad_lexical_cast)
            {
                throw SemanticError("bad numeric", loc);
            }
            return VType::NUMERIC;
        case NodeType::TF:
            return VType::TF;
        case NodeType::TEXT:
            return VType::TEXT;
        case NodeType::EQ:
        case NodeType::NE:
            l = GetType(node.left);
            r = GetType(node.right);
            if (l == r)return VType::TF;
            throw TypesNotCompatible(loc);
        case NodeType::GT:
        case NodeType::LT:
        case NodeType::GE:
        case NodeType::LE:
            l = GetType(node.left);
            r = GetType(node.right);
            if (l != r)throw TypesNotCompatible(loc);
            if (l == VType::NUMERIC || l == VType::TEXT)return VType::TF;
            throw InvalidTypeOperation(loc);
        case NodeType::CA:
        case NodeType::CB:
            l = GetType(node.left);
            r = GetType(node.right);
            if (l != r)throw TypesNotCompatible(loc);
            if (l == VType::NUMERIC)return VType::TF;
            throw InvalidTypeOperation(loc);
        case NodeType::FUNC:
            return CheckFunc(idx);
        default:
            throw SemanticError();
        }
    }

    std::string TypeChecker::GetVar(ast_t idx)
    {
        const ast &node = astV[idx];
        if (node.type != NodeType::VAR)throw SemanticError("Internal GetVar", &kDefaultLocation);
        return strVector[node.idx];
    }

    VType TypeChecker::CheckFunc(ast_t idx)
    {
        ast &func = astV[idx];
        auto loc = GetLocation(func.left);
        string name = GetVar(func.left);
        VSource source = table_.FindName(name);
        switch (source)
        {
          case VSource::StdFunction:
          {
            const StdFunction *function = table_.GetStdFunction(name);
            CheckParas(function, func.right, loc);
            return function->result;
          }
          case VSource::Input:
          {
            if (is_input_)throw SemanticError("input cannot contain input", loc);
            if (func.right != -2)throw SemanticError("not a function, is input", loc);
            Input input = table_.GetInput(name);
            func.type = NodeType::INPUT;
            func.idx = input.id;
            return input.type;
          }
          case VSource::Variable:
          {
            if (is_input_)throw SemanticError("input cannot contain variable", loc);
            if (func.right != -2)throw SemanticError("not a function, is variable", loc);
            Variable variable = table_.GetVariable(name);
            func.type = NodeType::VAR;
            func.idx = variable.position;
            return variable.type;
          }
          case VSource::Undefined:
          {
            string es = "'" + name + "' : undeclared identifier";
            throw SemanticError(es.c_str(), loc);
          }
          default:
            throw SemanticError();
        }
    }

    void TypeChecker::Check(stmt_t stmt)
    {
        if (stmt == -1)return;
        boost::apply_visitor(visitor_, stmtV[stmt]);
    }

    void TypeChecker::Check()
    {
        CheckInput();
        CheckStmts(root);
    }

    void TypeChecker::CheckStmts(stmts_t idx)
    {
        for (stmt_t stmt : stmtsV[idx])
        {
            Check(stmt);
        }
    }

    void TypeChecker::CheckParas(const StdFunction *function, asts_t idx,
        const YYLTYPE *loc)
    {
        auto &paras = function->paras;
        if (idx < 0)
        {
            if (!paras.empty() && function->min != 0)
            {
                throw SemanticError("invalid number of parameters", loc);
            }
            return;
        }
        const vector<ast_t> &args = astsV[idx];
        if (function->min == -1 && paras.size() != args.size()
            || function->min != -1 && paras.size() < args.size())
        {
            throw SemanticError("invalid number of parameters", loc);
        }
        for (size_t i = 0; i < args.size(); i++)
        {
            VType at = GetType(args[i]);
            if (at != paras[i])
            {
                throw SemanticError("incorrect argument type", loc);
            }
        }
    }

    void TypeChecker::CheckInput()
    {
        is_input_ = true;
        for (ast_t idx : inputVector)
        {
            const ast &input = astV[idx];
            auto loc = GetLocation(idx);
            if (input.type == NodeType::IBPVARDEC)
            {
                throw SemanticError("This attribute can be applied only for variables", loc);
            }
            string name = GetVar(input.left);
            VSource source = table_.FindName(name);
            if (source != VSource::Undefined)
            {
                throw SemanticError("this word has already been defined", loc);
            }
            VType type = GetType(input.right);
            table_.NewInput(name, type, input.right);
        }
        is_input_ = false;
    }

    int TypeChecker::ReserverTrue()
    {
        return table_.ReserveSpace(kAstTrue_);
    }

    int TypeChecker::Reserve(ast_t exp)
    {
        return table_.ReserveSpace(exp);
    }

    Table& TypeChecker::GetTable()
    {
        return table_;
    }

    int TypeChecker::NewOrder(OrderInfo oi)
    {
        int id = order_infos_.size();
        order_infos_.push_back(oi);
        return id;
    }

    Program TypeChecker::GetProgram() const
    {
        SetUpEnviroment sue = table_.GetSetupEnviroment();
        Program p = { root, sue, strVector, astV, astsV, stmtV, stmtsV };
        p.order_info = order_infos_;
        return p;
    }

    bool TypeChecker::IsLoop()
    {
        return is_loop_;
    }

    void TypeChecker::SetLoop(bool is_loop)
    {
        is_loop_ = is_loop;
    }

}  // namespace lex
