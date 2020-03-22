#ifndef _PARSER_HPP_
#define _PARSER_HPP_

#include "Expression.hpp"
#include "ExceptionHandler.hpp"
//using namespace std;

class Parser{
    public :
        /* Memeriksa apakah input yang dimasukkan user sudah valid
            Asumsi input user selalu operand operator operand, dipisah dengan spasi*/
        bool validate(std::string);

        /* Menerima ekspresi infix valid. Jika string memiliki expresi A s B, method akan mengembalikan A x s B */
        std::string addX(std::string);

        /* Menerima ekspresi infix valid dan jika input memiliki bentuk A - - B, akan diubah menjadi A + B
           bentuk - A + B (Paling awal -) akan diubah menjadi 0 - A + B */
        std::string minusConversion(std::string);

        /* Mengubah input ekspresi matematis yang berbentuk infix menjadi postfix
           Asumsi ekspresi infix merupakan ekspresi valid dan sudah dilakukan addX dan minusConversion ke string tsb*/
        std::string toPostfix(std::string);

        /* Menerima string postfix dan mengembalikan hasil perhitungan */
        float calculate(std::string);
};

#endif