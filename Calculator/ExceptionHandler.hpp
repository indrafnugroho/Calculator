#ifndef __EXCEPTION_HANDLER_HPP__
#define __EXCEPTION_HANDLER_HPP__

#include <string>

class BaseException {
public:
    // show error message on calculator screen
    virtual std::string returnMessage() = 0;
};

class MemoryException : public BaseException {
private:
    std::string memoryType;
public:
    MemoryException(std::string mt);
    std::string returnMessage();
};

class ParserException : public BaseException {
private:
    std::string errMsg;
    int errType;
    std::string op;
public:
    ParserException(int et, std::string s);
    std::string returnMessage();
};

#endif
