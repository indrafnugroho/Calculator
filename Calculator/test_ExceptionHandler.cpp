#include "ExceptionHandler.hpp"
#include <iostream>

int main() {
	try {
		std::cout << "this is first example\n";
		throw new MemoryException("Ans");
	} catch(BaseException* b) {
		std::cout << b->returnMessage() << std::endl;
	}

	try {
		std::cout << "this is second example\n";
		throw new ParserException(2,"-");
	} catch(BaseException* b) {
		std::cout << b->returnMessage() << std::endl;
	}

	try {
		std::cout << "this is third example\n";
		throw new ExpressionException();
	} catch(BaseException* b) {
		std::cout << b->returnMessage() << std::endl;
	}

	return 0;
}