#ifndef _EXPRESSION_HPP_
#define _EXPRESSION_HPP_

#include <cmath>

class Expression {
public:
    Expression() {}
    virtual float solve(){return 0;};
};

class TerminalExpression : public Expression {
protected:
    float x;
public:
    TerminalExpression(float x);
    float solve();
};

class UnaryExpression : public Expression {
protected:
    Expression* x;
public:
    UnaryExpression(Expression* x);
    virtual float solve() = 0;
};

class BinaryExpression : public Expression {
protected:
    Expression* x;
    Expression* y;
public:
    BinaryExpression(Expression* x, Expression* y);
    virtual float solve() = 0;
};

class SquareRootExpression : public UnaryExpression {
    public:
        SquareRootExpression(Expression* x);
        float solve();
};

class NegativeExpression : public UnaryExpression {
    public:
        NegativeExpression(Expression* x);
        float solve();
};

class AddExpression : public BinaryExpression {
    public:
        AddExpression(Expression* x, Expression* y);
        float solve();
};

class SubstractExpression : public BinaryExpression {
    public:
        SubstractExpression(Expression* x, Expression* y);
        float solve();
};

class MultiplicationExpression : public BinaryExpression {
    public:
        MultiplicationExpression(Expression* x, Expression* y);
        float solve();
};

class DivisionExpression : public BinaryExpression {
    public:
        DivisionExpression(Expression* x, Expression* y);
        float solve();
};

#endif