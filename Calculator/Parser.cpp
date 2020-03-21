#include <stack>
#include <string>
#include <cmath>
#include "Parser.hpp"

//using namespace std;

// Spesifikasi tiap method ada di Parser.hpp
bool Parser :: validate(std::string input){
    size_t i = 0;
    bool previousIsOperator = true;
    bool previousIsSquareRoot = false;
    bool previousIsDot = false;
    int operatorCount = 0;
    int dotCount = 0;

    if(input.size() == 0){
        throw "Error : Empty Expression";
    }

    while (i < input.size()){
        
        if (input[i] == '0' || input[i] == '1' || input[i] == '2' || input[i] == '3' || input[i] == '4' || input[i] == '5' || input[i] == '6' || input[i] == '7' || input[i] == '8' || input[i] == '9'){
            
            previousIsOperator = false;
            previousIsSquareRoot = false;
            previousIsDot = false;
            operatorCount = 0;
        }
        else if (input[i] == '+' || input[i] == 'x' || input[i] == ':'){
            
            if(previousIsOperator || previousIsSquareRoot){
                throw "Error : Expected operand, got operator " + input[i];
            }

            if(previousIsDot){
                throw "Error : Expected number after \".\", got operator " + input[i];
            }

            previousIsOperator = true;
            previousIsSquareRoot = false;
            operatorCount++;
            dotCount = 0;
        }
        else if (input[i] == '-'){
            
            if(previousIsSquareRoot){
                throw "Error : Square root of negative number";
            }

            if(previousIsDot){
                throw "Error : Expected number after \".\", got operator -";
            }

            if(previousIsOperator && operatorCount > 1){
                throw "Error : Expected operand, got operator -";
            }

            previousIsOperator = true;
            previousIsSquareRoot = false;
            operatorCount++;
            dotCount = 0;
        }
        else if (input[i] == 's'){
                     
            if (previousIsDot){
                throw "Error : Expected number after \".\", got square root";
            }

            previousIsSquareRoot = true;
            dotCount = 0;
        }
        else if (input[i] == '.'){
            
            if(previousIsOperator || previousIsSquareRoot){
                throw "Error : Expected operand got .";
            }

            if (dotCount >= 1){
                throw "Error : Too many .";
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
    while (i < retval.size()){
        if (retval[i] == 's'){
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
                retval.insert(i, "0 ");
            }
            else {

                if (retval[i - 2] == '-'){
                    retval.replace(i - 2, 3, "+");
                }
                else if (retval[i - 2] == '+'){
                    retval.replace(i - 2, 3, "-");
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
    int j, k;
    bool lastIsOperator;

    while (i < infix.size()){

        if (infix[i] == '0' || infix[i] == '1' || infix[i] == '2' || infix[i] == '3' || infix[i] == '4' || infix[i] == '5' || infix[i] == '6' || infix[i] == '7' || infix[i] == '8' || infix[i] == '9'){
            lastIsOperator = false;
            j = i;
            k = 0;
            while (infix[i] != ' '){
                i++;
                k++;
            }

            retval += infix.substr(j, k) + " ";
        }
        else if (infix[i] == '+' || infix[i] == '-' || infix[i] == 'x' || infix[i] == ':' || infix[i] == 's'){
            lastIsOperator = true;
            if (store.empty()){
                store.push(infix[i]);
            }
            else {

                if (infix[i] == 's'){
                    store.push(infix[i]);
                }
                else if (infix[i] == 'x' || infix[i] == ':'){

                    while (!store.empty() && (store.top() == 's' || store.top() == 'n')){
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

                        while (!store.empty() && store.top() != '+' && store.top() != '-'){
                            retval.push_back(store.top());
                            retval.push_back(' ');
                            store.pop();
                        }
                        store.push(infix[i]);
                    }
                }
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

int Parser :: calculate(std::string postfix){
    //stack<Expression> store;
    std::stack<int> store;
    size_t i = 0;
    int j, k, op1, op2;
    int tmp;

    while (i < postfix.size()){
        if (postfix[i] == '0' || postfix[i] == '1' || postfix[i] == '2' || postfix[i] == '3' || postfix[i] == '4' || postfix[i] == '5' || postfix[i] == '6' || postfix[i] == '7' || postfix[i] == '8' || postfix[i] == '9'){
            j = i;
            k = 0;
            while (postfix[i] != ' ' && i < postfix.size()){
                i++;
                k++;
            }
            //TerminalExpression temp(stoi(postfix.substr(j, k)));
            int temp = stoi(postfix.substr(j, k));
            store.push(temp);
        }
        else{

            if (postfix[i] == '+'){
                
                op2 = store.top();
                store.pop();
                op1 = store.top();
                store.pop();
                store.push(op1 + op2);
                /*currTop = store.top().solve();
                store.pop();
                TerminalExpression temp(currTop);
                AddExpression add(&temp, &store.top());
                store.pop();
                store.push(add);*/
            }
            else if (postfix[i] == '-'){

                op2 = store.top();
                store.pop();
                op1 = store.top();
                store.pop();
                store.push(op1 - op2);
                /*currTop = store.top().solve();
                store.pop();
                TerminalExpression temp(currTop);
                SubstractExpression sub(&temp, &store.top());
                store.pop();
                store.push(sub);*/
            }
            else if (postfix[i] == 'x'){

                op2 = store.top();
                store.pop();
                op1 = store.top();
                store.pop();
                store.push(op1 * op2);
                /*currTop = store.top().solve();
                store.pop();
                TerminalExpression temp(currTop);
                MultiplicationExpression mult(&temp, &store.top());
                store.pop();
                store.push(mult);*/
            }
            else if (postfix[i] == ':'){

                op2 = store.top();
                store.pop();
                op1 = store.top();
                store.pop();
                store.push(op1 / op2);
                /*currTop = store.top().solve();
                store.pop();
                TerminalExpression temp(currTop);
                DivisionExpression divi(&temp, &store.top());
                store.pop();
                store.push(divi);*/
            }
            else if (postfix[i] == 's'){

                op1 = store.top();
                store.pop();
                tmp = sqrt(op1);
                store.push(tmp);
                /*SquareRootExpression sq(&store.top());
                store.pop();
                store.push(sq);*/
            }
            else if (postfix[i] == 'n'){

                op1 = store.top();
                store.pop();
                store.push((-1) * op1);
            }
        }
        
        i++;
    }

    return store.top();
    //return store.top().solve();
}