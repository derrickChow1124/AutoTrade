#include "exec_visitor.h"

#include <string>
using namespace std;

using namespace lex;

int ExecVisitor::get_n_m(ast_t idx) const
{
    if (idx == -1)return -1;
    double dv = exe_.CheckGetValue<double>(idx);
    return (int)dv;
}

class print_visitor : public boost::static_visitor<int>
{
public:
    print_visitor() : buffp(buff), remain(256) {}

    void Print(Value v, int n, int m)
    {
        n_ = n;
        m_ = m;
        if (remain == -1)return;
        int g = boost::apply_visitor(*this, v);
        if (~g)
        {
            buffp += g;
            remain -= g;
        }
        else
        {
            remain = -1;
        }
    }

    string ToString()
    {
        return buff;
    }

    int operator()(double d)
    {
        if (~n_)
        {
            int m = ~m_ ? m_ : 6;
            int n = m ? n_ + 1 + m : n_;
            return _snprintf_s(buffp, remain, _TRUNCATE, "%*.*f", n, m, d);
        }
        else
        {
            return _snprintf_s(buffp, remain, _TRUNCATE, "%f", d);
        }
    }

    int operator()(bool d)
    {
        int n = ~n_ ? n_ : 0;
        return _snprintf_s(buffp, remain, _TRUNCATE, "%*s", n, d ? "true" : "false");
    }

    int operator()(const string & s)
    {
        int n = ~n_ ? n_ : 0;
        return _snprintf_s(buffp, remain, _TRUNCATE, "%*s", n, s.c_str());
    }

private:
    int n_, m_;
    char buff[256];
    char *buffp;
    size_t remain;
};

void ExecVisitor::operator()(const print_stmt & ps) const
{
    if (~ps.list)
    {
        print_visitor pv;
        for (ast_t item : exe_.GetAsts(ps.list))
        {
            const ast &node = exe_.GetAst(item);
            Value v = exe_.GetValue(node.left);
            int n = get_n_m(node.mid);
            int m = get_n_m(node.right);
            pv.Print(v, n, m);
        }
        cout << pv.ToString();
    }
    cout << endl;
}
