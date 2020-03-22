#include "Expression.hpp"

TerminalExpression::TerminalExpression(float x) {
    this->x = x;
}

float TerminalExpression::solve() {
    return this->x;
}

UnaryExpression::UnaryExpression(Expression* x) {
    if (x->solve >= 0) {
        this->x = x;
    } else {
        throw x;
        //throw "error: penggunaan bilangan negatif";
    }
}

BinaryExpression::BinaryExpression(Expression* x, Expression* y) {
    this->x = x;
    this->y = y;
}

SquareRootExpression::SquareRootExpression(Expression* x):UnaryExpression(x){
}

float SquareRootExpression::solve() {
    float s = sqrt(x->solve());
    return s;
}

NegativeExpression::NegativeExpression(Expression* x):UnaryExpression(x){
}

float NegativeExpression::solve() {
    return x->solve() * -1;
}

AddExpression::AddExpression(Expression* x, Expression* y):BinaryExpression(x,y){
}

float AddExpression::solve() {
    return x->solve() + y->solve();
}

SubstractExpression::SubstractExpression(Expression* x, Expression* y):BinaryExpression(x,y){
}

float SubstractExpression::solve() {
    return x->solve() - y->solve();
}

MultiplicationExpression::MultiplicationExpression(Expression* x, Expression* y):BinaryExpression(x,y){
}

float MultiplicationExpression::solve() {
    return x->solve() * y->solve();
}

DivisionExpression::DivisionExpression(Expression* x, Expression* y):BinaryExpression(x,y){
}

float DivisionExpression::solve() {
    if (y->solve() != 0){
        return x->solve() / y->solve();
    } else {
        // throw "error: Pembagian dengan nol";
        throw 0;
    }
}
