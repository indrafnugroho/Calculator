#include "CalcButton.h"

Parser p;
CalcMemory m;

void CalcButton::processNum(std::string num) {
	m.concatStr(num);
}

void CalcButton::processOprNDot(std::string s) {
	if (s.compare(".") == 0) {
		m.concatStr(s);
	}
	else {
		m.concatStr(" ");
		m.concatStr(s);
		m.concatStr(" ");
	}
}

void CalcButton::processMC() {
	try {
		std::string res;
		if (p.validate(m.getStr())) {
			res = p.minusConversion(m.getStr());
			res = p.toPostfix(res);
			m.pushQ(std::to_string(p.calculate(res)));
		}
	}
	catch (BaseException* b) {
		throw b;
	}
}

void CalcButton::processMR() {
	if (!m.isQEmpty()) {
		m.setLastMR(m.popQ());
		m.concatStr(m.getLastMR());			
	}
	else {
		throw new MemoryException("Queue");
	}	
}

void CalcButton::processClear() {
	m.setStr("");
	m.setAns(1000000);
	m.setIsAnsFilled(false);
	m.emptyQueue();
	m.setLastMR("");
}

void CalcButton::processAns() {
	if (m.getIsAnsFilled()) {
		m.concatStr(std::to_string(m.getAns()));
	}
	else {
		throw new MemoryException("Ans");
	}
}

void CalcButton::processRes() {
	try {
		m.setIsAnsFilled(true);
		std::string res;
		if (p.validate(m.getStr())) {
			res = p.minusConversion(m.getStr());
			res = p.toPostfix(res);
			m.setAns(p.calculate(res));
			m.setStr(std::to_string(m.getAns()));
		}
	}
	catch (BaseException* b) {
		throw b;
	}
}

void CalcButton::processAC() {
	m.setStr("");
}

void CalcButton::processDel(char c) {
	if (c == 'n' || c == '.') m.popBackStr();
	else {
		for (int i = 0; i < 3; i++) {
			m.popBackStr();
		}
	}
}