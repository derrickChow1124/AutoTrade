#include "check_visitor.h"

#include <string>
using namespace std;

#include "table.h"
#include "type.h"
using namespace Type;

namespace{
	void check_asm_variable(string name, asm_stmt &as)
	{
		Variable var = varTable[name];
		switch (var.type)
		{
		case VType::NUMERIC:
			break;
		case VType::TEXT:
		case VType::TF:
			if (as.type != 0)throw InvalidTypeOperation();
			break;
		}
		VType rightType = get_type(as.exp);
		if (var.type != rightType)
		{
			throw TypesNotCompatible();
		}
	}

	int check_n_m(ast &print)
	{
		if (print.mid == -1)return 0;
		if (get_type(print.mid) != VType::NUMERIC)throw SemanticError("n must be numeric");
		if (print.right == -1)return 1;
		if (get_type(print.right) != VType::NUMERIC)throw SemanticError("m must be numeric");
		return 2;
	}
}

void check_visitor::operator()(print_stmt & ps) const
{
	if (~ps.list)
	{
		for (ast_t item : astsV[ps.list])
		{
			ast &print = astV[item];
			VType l_type = get_type(print.left);
			int nm = check_n_m(print);
			switch (l_type)
			{
			case VType::NUMERIC:
				break;
			case VType::TF:
			case VType::TEXT:
				if (nm == 2)throw SemanticError("m cannot apply to this type");
				break;
			default:
				throw SemanticError();
			}
		}
	}
}

void check_visitor::operator()(var_stmt & vs) const
{
	for (ast_t idx : astsV[vs.vars])
	{
		ast &var = astV[idx];
		string name = get_var(var.left);
		VSource source = find_name(name);
		if (source != VSource::Undefined)
		{
			throw SemanticError("this word has already been defined");
		}
		VType type = get_type(var.right);
		int position = enviroment.ReserveSpace(type, var.right);
		declare_var(name, position, type);
	}
}

void check_visitor::operator()(block_stmt & bs) const
{
	check_stmts(bs.stmts);
}

void check_visitor::operator()(asm_stmt & as) const
{
	string name = get_var(as.var);
	VSource source = find_name(name);
	switch (source)
	{
	case VSource::Variable:
		check_asm_variable(name, as);
		break;
	default:
		throw SemanticError("array or varable expected");
	}
}

void check_visitor::operator()(func_stmt & fs) const
{
	check_func(fs.func);
}

void check_visitor::operator()(order_stmt & os) const
{

}

void check_visitor::operator()(switch_stmt & ws) const
{

}

void check_visitor::operator()(while_stmt & ws) const
{
	if (get_type(ws.con) != VType::TF)throw LogicalExpressionExpected();
	check(ws.block);
}

void check_visitor::operator()(for_stmt & fs) const
{
	string name = get_var(fs.var);
	VSource source = find_name(name);
	if (source != VSource::Variable)
	{
		throw SemanticError("array or varable expected");
	}
	Variable var = varTable[name];
	if (var.type != VType::NUMERIC)
	{
		throw TypesNotCompatible();
	}
	VType ft = get_type(fs.from);
	if (ft == VType::TEXT)throw TypesNotCompatible();
	VType tt = get_type(fs.to);
	if (tt == VType::TEXT)throw TypesNotCompatible();
	check(fs.block);
}

void check_visitor::operator()(once_stmt & os) const
{
	if (~os.con && get_type(os.con) != VType::TF)throw LogicalExpressionExpected();
	check(os.stmt);
	os.con_position = enviroment.ReserveSpace(VType::TF, kAstTrue);
}

void check_visitor::operator()(if_stmt & is) const
{
	if (get_type(is.con) != VType::TF)throw LogicalExpressionExpected();
	check(is.then);
	check(is.els);
}




