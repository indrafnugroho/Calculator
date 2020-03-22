#include "CalcButton.h"
#include <iostream>

int main() {
	CalcButton cb;
	CalcMemory cm;

	std::cout << "this is the initial condition of calcmemory:\n"
		<< "string: " << cm.getStr() << std::endl
		<< "ans: " << cm.getAns() << std::endl
		<< "isAnsFilled: " << cm.getIsAnsFilled() << std::endl
		<< "lastMR: " << cm.getLastMR() << std::endl;
	
	if (cm.isQEmpty()) std::cout << "this is printed if queue is empty\n";

	cb.processNum("10");
	std::cout << "string now: " << cm.getStr() << std::endl;

	cb.processOprNDot("+");
	std::cout << "string now: " << cm.getStr() << std::endl;

	cb.processNum("10");
	cb.processOprNDot(".");
	cb.processNum("5");
	std::cout << "string now: " << cm.getStr() << std::endl;

	cb.processMC();
	if (!cm.isQEmpty()) std::cout << "this is printed if queue is not empty\n";

	cb.processRes();
	std::cout << "string now: " << cm.getStr() << std::endl;

	cb.processAC();
	std::cout << "string now: " << cm.getStr() << std::endl;

	cb.processMR();
	std::cout << "string now: " << cm.getStr() << std::endl;

	cb.processOprNDot("x");
	cb.processAns();
	std::cout << "string now: " << cm.getStr() << std::endl;

	cb.processOprNDot("+");
	std::cout << "string now: " << cm.getStr() << std::endl;
	cb.processDel('+');
	std::cout << "string now: " << cm.getStr() << std::endl;

	cb.processClear();
	std::cout << "this is the final condition of calcmemory after being cleared:\n"
		<< "string: " << cm.getStr() << std::endl
		<< "ans: " << cm.getAns() << std::endl
		<< "isAnsFilled: " << cm.getIsAnsFilled() << std::endl
		<< "lastMR: " << cm.getLastMR() << std::endl;
	
	if (cm.isQEmpty()) std::cout << "this is printed if queue is empty\n";
	
	return 0;
}