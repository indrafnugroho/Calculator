#ifndef _EXPRESSION_HPP_
#define _EXPRESSION_HPP_

#include <cmath>
#include "ExceptionHandler.hpp"

template <class T>
class Expression {
public:
    Expression() {}
    virtual T solve() = 0;
};

template <class T>
class TerminalExpression : public Expression<T>{
protected:
    T x;
public:
    TerminalExpression(T x){
        this->x = x;
    }
    T solve(){
        return this->x;
    }
};

template <class T>
class UnaryExpression : public Expression<T> {
protected:
    Expression<T>* x;
public:
    UnaryExpression(Expression<T>* x){
        this->x = x;
    }
    virtual T solve() = 0;
};

template <class T>
class BinaryExpression : public Expression<T> {
protected:
    Expression<T>* x;
    Expression<T>* y;
public:
    BinaryExpression(Expression<T>* x, Expression<T>* y){
        this->x = x;
        this->y = y;
    }
    virtual T solve() = 0;
};

class SquareRootExpression : public UnaryExpression<float> {
    public:
        SquareRootExpression(Expression<float>* x) : UnaryExpression(x){}
        float solve() {return sqrt(x->solve());}
};

class NegativeExpression : public UnaryExpression<float> {
    public:
        NegativeExpression(Expression<float>* x) : UnaryExpression(x){}
        float solve() {return x->solve() * -1;}
};

class AddExpression : public BinaryExpression<float> {
    public:
        AddExpression(Expression<float>* x, Expression<float>* y) : BinaryExpression(x, y){}
        float solve(){return x->solve() + y->solve();}
};

class SubstractExpression : public BinaryExpression<float> {
    public:
        SubstractExpression(Expression<float>* x, Expression<float>* y) : BinaryExpression(x, y){}
        float solve(){return x->solve() - y->solve();}
};

class MultiplicationExpression : public BinaryExpression<float> {
    public:
        MultiplicationExpression(Expression<float>* x, Expression<float>* y) : BinaryExpression(x, y){}
        float solve() {return x->solve() * y->solve();}
};

class DivisionExpression : public BinaryExpression<float> {
    public:
        DivisionExpression(Expression<float>* x, Expression<float>* y) : BinaryExpression(x, y){}
        float solve() {
            if(y->solve() != 0){

                return x->solve() / y->solve();
            }
            else{
                
                throw new ExpressionException();
            }
        }
};

#endif