#include "Expression.hpp"

TerminalExpression::TerminalExpression(int x) {
    this->x = x;
}

int TerminalExpression::solve() {
    return this->x;
}

UnaryExpression::UnaryExpression(Expression* x) {
    if (x >= 0) {
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

int SquareRootExpression::solve() {
    int s = sqrt(x->solve());
    return s;
}

/* NegativeExpression::NegativeExpression(Expression* x):UnaryExpression(x){
}

int NegativeExpression::solve() {
    return x->solve() * -1;
} */

AddExpression::AddExpression(Expression* x, Expression* y):BinaryExpression(x,y){
}

int AddExpression::solve() {
    return x->solve() + y->solve();
}

SubstractExpression::SubstractExpression(Expression* x, Expression* y):BinaryExpression(x,y){
}

int SubstractExpression::solve() {
    return x->solve() - y->solve();
}

MultiplicationExpression::MultiplicationExpression(Expression* x, Expression* y):BinaryExpression(x,y){
}

int MultiplicationExpression::solve() {
    return x->solve() * y->solve();
}

DivisionExpression::DivisionExpression(Expression* x, Expression* y):BinaryExpression(x,y){
}

int DivisionExpression::solve() {
    if (y->solve() != 0){
        return x->solve() / y->solve();
    } else {
        // throw "error: Pembagian dengan nol";
        throw 0;
    }
}
