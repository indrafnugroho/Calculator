#include <iostream>
#include <string>
#include "Parser.hpp"
using namespace std;

int main(){
    Parser p;
    string a = "- 1 + 2 - 3 + 4 - 5"; // Ubah ubah input aja disini, aku mager pake cin
    // cin >> a;

    /*int i = 0;
    int j, k;
    while (i < a.size()){
        if (a[i] == 's'){
            if (a[i - 2] == '1' || a[i - 2] == '3'){
                a.insert(i, "x ");
            }
        }

        i++;
    }*/
    string b = p.minusConversion(a);
    cout << b << endl;
    string c = p.toPostfix(b);
    cout << c << endl;
    cout << p.calculate(c) << endl;
    return 0;
}