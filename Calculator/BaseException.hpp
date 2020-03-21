#ifndef __BASE_EXCEPTION_HPP__
#define __BASE_EXCEPTION_HPP__

#include <iostream>
using namespace std;

class BaseException {
public:
    // menuliskan pesan kesalahan ke stdout
    virtual string returnMessage() = 0;
};
class SyntaxException : public BaseException{
    public:
        string returnMessage(){
            return "Syntax Error";
        }
};
#endif
