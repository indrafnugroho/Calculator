#include "CalcButton.h"
#include <iostream>

int main() {
	CalcMemory cm;

	cm.setStr("this is string input");
	std::cout << cm.getStr() << std::endl;


	cm.setLastMR("this is last MR input: 10");
	std::cout << cm.getLastMR() << std::endl;
	
	cm.setAns(98.7);
	std::cout << "this is ans input: " << cm.getAns() << std::endl;
	
	cm.setIsAnsFilled(true);
	if(cm.getIsAnsFilled()) {
		std::cout << "if this is printed then isAnsFilled is true\n";
	}
	
	if (cm.isQEmpty()) {
		std::cout << "if this is printed then queue is empty\n";
	}

	cm.concatStr(" plus concat string");
	std::cout << cm.getStr() << std::endl;

	cm.popBackStr();
	std::cout << "this is string after being popped back: " << cm.getStr() << std::endl;
	
	cm.pushQ("satu");
	std::cout << "now we have pushed and popped " << cm.popQ() << " to the queue" << std::endl;
	
	cm.pushQ("dua");
	std::cout << "now we have pushed one more string to the queue" << std::endl;
	
	cm.emptyQueue();
	std::cout << "now we make the queue empty\n";

	if (cm.isQEmpty()) {
		std::cout << "this is printed if queue is empty\n";
	}

	return 0;
}