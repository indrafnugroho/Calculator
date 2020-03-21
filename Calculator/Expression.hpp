#ifndef _EXPRESSION_HPP_
#define _EXPRESSION_HPP_

#include <iostream>
#include <cmath>

class Expression {
public:
    Expression() {}
    virtual int solve() = 0;
};

class TerminalExpression : public Expression {
protected:
    int x;
public:
    TerminalExpression(int x);
    int solve();
};

class UnaryExpression : public Expression {
protected:
    Expression* x;
public:
    UnaryExpression(Expression* x);
    virtual int solve() = 0;
};

class BinaryExpression : public Expression {
protected:
    Expression* x;
    Expression* y;
public:
    BinaryExpression(Expression* x, Expression* y);
    virtual int solve() = 0;
};

class SquareRootExpression : public UnaryExpression {
    public:
        SquareRootExpression(Expression* x);
        int solve();
};

/* class NegativeExpression : public UnaryExpression {
    public:
        NegativeExpression(Expression* x);
        int solve();
}; */

class AddExpression : public BinaryExpression {
    public:
        AddExpression(Expression* x, Expression* y);
        int solve();
};

class SubstractExpression : public BinaryExpression {
    public:
        SubstractExpression(Expression* x, Expression* y);
        int solve();
};

class MultiplicationExpression : public BinaryExpression {
    public:
        MultiplicationExpression(Expression* x, Expression* y);
        int solve();
};

class DivisionExpression : public BinaryExpression {
    public:
        DivisionExpression(Expression* x, Expression* y);
        int solve();
};

#endif