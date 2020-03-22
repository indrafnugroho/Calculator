#include "ExceptionHandler.hpp"

MemoryException::MemoryException(std::string mt) {
	this->memoryType = mt;
}

std::string MemoryException::returnMessage() {
	return ("Error: " + this->memoryType + " is empty");
}

ParserException::ParserException(int et, std::string s) {
	this->errMsg = "";
	this->errType = et;
	this->op = s;
}

std::string ParserException::returnMessage() {
	switch (this->errType) {
	//1st case: empty expression
	case 1:
		this->errMsg = "Error: Empty expression";
		break;

	//2nd case: expected operand yet got operator, sqrt, or dot
	case 2:
		this->errMsg = "Error: Expected operand, got " + this->op;
		break;

	//3rd case: got operator or sqrt after dot (.)
	case 3:
		this->errMsg = "Error: Expected number after \".\", got " + this->op;
		break;

	//4th case: square root of negative number
	case 4:
		this->errMsg = "Error: Square root of negative number";
		break;

	//5th case: more than a dot(.) in a number
	case 5:
		this->errMsg = "Error: Too many .";
		break;
	}

	return this->errMsg;
}

std::string ExpressionException::returnMessage() {
	return "Error: Division by 0";
}