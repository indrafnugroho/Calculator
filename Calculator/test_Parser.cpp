#include <iostream>
#include <string>
#include <limits>
#include "Parser.hpp"
using namespace std;

int main(){
    // Perlu object code Parser dan ExceptionHandler untuk di compile
    Parser p;
    string a; 
    bool status = false;
    cout << "Input expression, jika ingin menulis operator, beri spasi pada kedua sisi\nContoh : 1 + 1, 1 -  - 1, dll\nOperator valid = {+, -, x, :, s} s = square root" << endl; 
    getline(cin, a);

    cout << "**********Uji coba validate**********" << endl;
    try{
        status = p.validate(a);
    }
    catch(...){
        cout << "Input invalid\nminusConversion, toPostfix, dan calculate memerlukan input valid agar dapat diuji coba" << endl;
    }

    if(status){

        cout << "Input valid" << endl;
        cout << "\n**********Uji coba minusConversion**********" << endl;
        a = p.minusConversion(a);
        cout << "Hasil : " << a << endl;

        cout << "\n**********Uji coba toPostfix**********" << endl;
        a = p.toPostfix(a);
        cout << "Hasil : " << a << endl;

        cout << "\n**********Uji coba calculate**********" << endl;
        cout << "Hasil : " << p.calculate(a) << endl;
    }
    return 0;
}