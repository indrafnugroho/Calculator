#include <stack>
#include <string>
#include <cmath>
#include <iostream>
#include "Parser.hpp"
#include "ExceptionHandler.hpp"

//using namespace std;

// Spesifikasi tiap method ada di Parser.hpp
bool Parser :: validate(std::string input){
    size_t i = 0;
    bool previousIsOperator = true;
    bool previousIsSquareRoot = false;
    bool previousIsDot = false;
    bool startsWithMin = false;
    int operatorCount = 0;
    int dotCount = 0;

    while (input[0] == ' '){
        input.erase(i, 1);
    }
    if(input.size() == 0){
        throw new ParserException(1,"n");
    }
    while (i < input.size()){
        
        if (input[i] == '0' || input[i] == '1' || input[i] == '2' || input[i] == '3' || input[i] == '4' || input[i] == '5' || input[i] == '6' || input[i] == '7' || input[i] == '8' || input[i] == '9'){
            
            previousIsOperator = false;
            previousIsSquareRoot = false;
            previousIsDot = false;
            operatorCount = 0;
        }
        else if (input[i] == '+' || input[i] == 'x' || input[i] == ':'){
            std::string s;
            if(previousIsOperator || previousIsSquareRoot){
                s += input[i];
                throw new ParserException(2,s);
            }

            if(previousIsDot){
                s += input[i];
                throw new ParserException(3,s);
            }

            previousIsOperator = true;
            previousIsSquareRoot = false;
            operatorCount++;
            dotCount = 0;
        }
        else if (input[i] == '-'){
            
            if(startsWithMin){
                throw new ParserException(2,"-");
            }

            if(i == 0){
                startsWithMin = true;
            }

            if(previousIsSquareRoot){
                throw new ParserException(4,"n");
            }

            if(previousIsDot){
                throw new ParserException(3,"-");
            }

            if(previousIsOperator && operatorCount > 1){
                throw new ParserException(2,"-");
            }

            previousIsOperator = true;
            previousIsSquareRoot = false;
            operatorCount++;
            dotCount = 0;
        }
        else if (input[i] == 's'){
                     
            if (previousIsDot){
                throw new ParserException(3,"square root");
            }

            previousIsSquareRoot = true;
            dotCount = 0;
        }
        else if (input[i] == '.'){
            
            if(previousIsOperator || previousIsSquareRoot){
                throw new ParserException(2,".");
            }

            if (dotCount >= 1){
                throw new ParserException(5,"n");
            }

            previousIsDot = true;
            dotCount++;
        }

        i++;
    }

    return true;
}

std::string Parser :: addX(std::string input){
    size_t i = 0;
    std::string retval = input;
    while (retval[0] == ' '){
        retval.erase(i, 1);
    }
    while (i < retval.size()){
        if (retval[i] == 's' && i != 0){
            if (retval[i - 2] == '0' || retval[i - 2] == '1' || retval[i - 2] == '2' || retval[i - 2] == '3' || retval[i - 2] == '4' || retval[i - 2] == '5' || retval[i - 2] == '6' || retval[i - 2] == '7' || retval[i - 2] == '8' || retval[i - 2] == '9'){
                retval.insert(i, "x ");
            }
        }

        i++;
    }

    return retval;
}

std::string Parser :: minusConversion(std::string input){
    size_t i = 0;
    std::string retval = input;
    while (retval[0] == ' '){
        retval.erase(i, 1);
    }

    while (i < retval.size()){
        if (retval[i] == '-'){

            if (i == 0){
                retval.replace(i, 1, "n");
            }
            else if (i >= 3){

                if (retval[i - 3] == '-'){
                    retval.replace(i - 3, 4, "+");
                }
                else if (retval[i - 3] == '+'){
                    retval.replace(i - 3, 4, "-");
                }
                else if (retval[i - 3] == 'x' || retval[i - 3] == ':'){
                    retval.replace(i, 1, "n");
                }
            }
        }
        i++;
    }

    return retval;
}

std::string Parser :: toPostfix(std::string infix){
    std::stack<char> store;
    std::string retval;
    size_t i = 0;
    size_t j, k;
    bool lastIsOperator;
    while (retval[0] == ' '){
        retval.erase(i, 1);
    }

    while (i < infix.size()){

        if (infix[i] == '0' || infix[i] == '1' || infix[i] == '2' || infix[i] == '3' || infix[i] == '4' || infix[i] == '5' || infix[i] == '6' || infix[i] == '7' || infix[i] == '8' || infix[i] == '9'){
            lastIsOperator = false;
            j = i;
            k = 0;
            while (infix[i] != ' ' && i < infix.size()){
                i++;
                k++;
            }

            retval += infix.substr(j, k) + " ";
        }
        else if (infix[i] == '+' || infix[i] == '-' || infix[i] == 'x' || infix[i] == ':' || infix[i] == 's' || infix[i] == 'n'){
            
            if (store.empty()){
                store.push(infix[i]);
            }
            else {

                if (infix[i] == 's' || infix[i] == 'n'){
                    store.push(infix[i]);
                }
                else if (infix[i] == 'x' || infix[i] == ':'){

                    while (!store.empty() && store.top() != '+' && store.top() != '-'){
                        retval.push_back(store.top());
                        retval.push_back(' ');
                        store.pop();
                    }
                    store.push(infix[i]);
                }
                else{

                    if (infix[i] == '-' && lastIsOperator){
                        store.push('n');
                    }
                    else{

                        while (!store.empty()){
                            retval.push_back(store.top());
                            retval.push_back(' ');
                            store.pop();
                        }
                        store.push(infix[i]);
                    }
                }
                lastIsOperator = true;
            }
        }

        i++;    
    }
    while(!store.empty()){
        retval.push_back(store.top());
        retval.push_back(' ');
        store.pop();
    }

    return retval;
}

float Parser :: calculate(std::string postfix){
    std::stack<Expression<float>*> store;
    //std::stack<float> store;
    size_t i = 0;
    size_t j, k;
    //float op1, op2, tmp;

    while (i < postfix.size()){
        if (postfix[i] == '0' || postfix[i] == '1' || postfix[i] == '2' || postfix[i] == '3' || postfix[i] == '4' || postfix[i] == '5' || postfix[i] == '6' || postfix[i] == '7' || postfix[i] == '8' || postfix[i] == '9'){
            j = i;
            k = 0;
            while (postfix[i] != ' ' && i < postfix.size()){
                i++;
                k++;
            }
            TerminalExpression<float> *tmp = new TerminalExpression<float>(std::stof(postfix.substr(j, k)));
            //tmp = std::stof(postfix.substr(j, k));
            store.push(tmp);
        }
        else{

            if (postfix[i] == '+'){
                
                /*op2 = store.top();
                store.pop();
                op1 = store.top();
                store.pop();
                store.push(op1 + op2);*/
                TerminalExpression<float> *op2 = new TerminalExpression<float>(store.top()->solve());
                store.pop();
                TerminalExpression<float> *op1 = new TerminalExpression<float>(store.top()->solve());
                store.pop();
                AddExpression *add = new AddExpression(op1, op2);
                store.push(add);
            }
            else if (postfix[i] == '-'){

                /*op2 = store.top();
                store.pop();
                op1 = store.top();
                store.pop();
                store.push(op1 - op2);*/
                TerminalExpression<float> *op2 = new TerminalExpression<float>(store.top()->solve());
                store.pop();
                TerminalExpression<float> *op1 = new TerminalExpression<float>(store.top()->solve());
                store.pop();
                SubstractExpression *sub = new SubstractExpression(op1, op2);
                store.push(sub);
            }
            else if (postfix[i] == 'x'){

                /*op2 = store.top();
                store.pop();
                op1 = store.top();
                store.pop();
                store.push(op1 * op2);*/
                TerminalExpression<float> *op2 = new TerminalExpression<float>(store.top()->solve());
                store.pop();
                TerminalExpression<float> *op1 = new TerminalExpression<float>(store.top()->solve());
                store.pop();
                MultiplicationExpression *mult = new MultiplicationExpression(op1, op2);
                store.push(mult);
            }
            else if (postfix[i] == ':'){

                /*op2 = store.top();
                store.pop();
                op1 = store.top();
                store.pop();
                store.push(op1 / op2);*/
                TerminalExpression<float> *op2 = new TerminalExpression<float>(store.top()->solve());
                store.pop();
                TerminalExpression<float> *op1 = new TerminalExpression<float>(store.top()->solve());
                store.pop();
                DivisionExpression *divi = new DivisionExpression(op1, op2);
                store.push(divi);
            }
            else if (postfix[i] == 's'){

                /*op1 = store.top();
                store.pop();
                tmp = sqrt(op1);
                store.push(tmp);*/
                SquareRootExpression *sq = new SquareRootExpression(store.top());
                store.pop();
                store.push(sq);
            }
            else if (postfix[i] == 'n'){

                /*op1 = store.top();
                store.pop();
                store.push((-1) * op1);*/
                NegativeExpression *n = new NegativeExpression(store.top());
                store.pop();
                store.push(n);
            }
        }
        
        i++;
    }

    return store.top()->solve();
    //return store.top().solve();
}