#include <iostream>
#include <queue>
#include "Expression.hpp"
using namespace std;

int main(){
    // Perlu object code ExceptionHandler untuk di compile
    queue<Expression<float>*> q;
    float op1, op2;
    int input = 0;

    while (input != -999){
        cout << "Binary Expressions\n1. Create AddExpression\n2. Create SubstractExpression\n3. Create Multiplication Expression\n4. Create DivisionExpression\nUnary Expressions\n5. Create SquareRootExpression\n6. Create NegativeExpression\nExpression created will be pushed into the queue\nInput the number of Expression of choice (Input -999 to quit) : ";
        cin >> input;
        if (input == 1){

            cout << "Masukkan dua angka" << endl;
            cin >> op1 >> op2;
            AddExpression *add = new AddExpression(new TerminalExpression<float>(op1), new TerminalExpression<float>(op2));
            q.push(add);
            cout << op1 << " + " << op2 << " pushed to the queue" << endl;
        }
        else if (input == 2){

            cout << "Masukkan dua angka" << endl;
            cin >> op1 >> op2;
            SubstractExpression *sub = new SubstractExpression(new TerminalExpression<float>(op1), new TerminalExpression<float>(op2));
            q.push(sub);
            cout << op1 << " - " << op2 << " pushed to the queue" << endl;
        }
        else if (input == 3){

        
            cout << "Masukkan dua angka" << endl;
            cin >> op1 >> op2;
            MultiplicationExpression *mul = new MultiplicationExpression(new TerminalExpression<float>(op1), new TerminalExpression<float>(op2));
            q.push(mul);
            cout << op1 << " * " << op2 << " pushed to the queue" << endl;
        }
        else if (input == 4){

            cout << "Masukkan dua angka" << endl;
            cin >> op1 >> op2;
            DivisionExpression *div = new DivisionExpression(new TerminalExpression<float>(op1), new TerminalExpression<float>(op2));
            q.push(div);
            cout << op1 << " / " << op2 << " pushed to the queue" << endl;
        }
        else if (input == 5){

            cout << "Masukkan angka" << endl;
            cin >> op1;
            SquareRootExpression *sq = new SquareRootExpression(new TerminalExpression<float>(op1));
            q.push(sq);
            cout << "sqrt(" << op1 << ") pushed to the queue" << endl;
        }
        else if (input == 6){

            cout << "Masukkan angka" << endl;
            cin >> op1;
            NegativeExpression *n = new NegativeExpression(new TerminalExpression<float>(op1));
            q.push(n);
            cout << "-1 * " << op1 << " pushed to the queue" << endl;
        }
    }

    cout << "Queue elements = " << q.size() << " elements" << endl;
    if (q.size() > 0){

        cout << "Printing solve() of each element..." << endl;
        int i = 1;
        while (!q.empty()){
            
            cout << "[" << i << "]" << endl;
            cout << q.front()->solve() << endl;
            i++;
            q.pop();
        }
    }

    cout << "Operation finished" << endl;
    return 0;
}