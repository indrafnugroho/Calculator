#ifndef _PARSER_HPP_
#define _PARSER_HPP_

#include "Expression.hpp"
using namespace std;

class Parser{
    public :
        /* Memeriksa apakah input yang dimasukkan user sudah valid
            Asumsi input user selalu operand operator operand, dipisah dengan spasi*/
        bool validate(string);

        /* Menerima ekspresi infix valid. Jika string memiliki expresi A s B, method akan mengembalikan A x s B */
        string addX(string);

        /* Menerima ekspresi infix valid dan jika input memiliki bentuk A - - B, akan diubah menjadi A + B
           bentuk - A + B (Paling awal -) akan diubah menjadi 0 - A + B */
        string minusConversion(string);

        /* Mengubah input ekspresi matematis yang berbentuk infix menjadi postfix
           Asumsi ekspresi infix merupakan ekspresi valid dan sudah dilakukan addX dan minusConversion ke string tsb*/
        string toPostfix(string);

        /* Menerima string postfix dan mengembalikan hasil perhitungan */
        int calculate(string);
};

#endif