#ifndef LEX_EXECUTION_EXECUTOR_H_
#define LEX_EXECUTION_EXECUTOR_H_

#include <vector>

#include "../program.h"
#include "../std_table.h"
#include "abstract_executor.h"
#include "exec_visitor.h"
#include "execution.h"
#include "run_time_environment.h"

namespace lex
{
    class Executor : public AbstractExecutor
    {
    public:
        Executor(const Program &program);
        virtual ~Executor() override;

        void Execute();
        
    protected:
        virtual void SetUp();
        const Program &program_;
    private:
        virtual Value GetValue(ast_t idx) override;
        virtual Value& GetVar(int position) override;

        virtual void Exec(stmt_t stmt) override;
        virtual void ExecStmts(stmts_t idx) override;
        std::vector<Value> exec_paras(asts_t idx);
        std::string GetFunctionName(ast_t idx);
        Value exec_func(ast_t idx);

        virtual const ast& GetAst(ast_t idx) override;
        virtual const std::vector<ast_t>& GetAsts(asts_t idx) override;
        virtual void SetOrderAction(int id, OrderAction oa) override;

        ExecVisitor visitor_;
        StdTable table_;
        const SetUpEnviroment &sue_;
        const std::vector<std::string> &strVector_;
        const VV<ast> &astV_;
        const VV<std::vector<stmt_t>> &astsV_;
        const VV<stmt> &stmtV_;
        const VV<std::vector<ast_t>> &stmtsV_;
        RunTimeEnvironment rte_;

        DISALLOW_COPY_AND_ASSIGN(Executor);
    };

}  // namespace lex
#endif  // LEX_EXECUTION_EXECUTOR_H_
