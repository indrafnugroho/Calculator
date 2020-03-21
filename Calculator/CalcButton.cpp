#include "CalcButton.h"

std::string CalcButton::str = "";
Parser p;

CalcButton::CalcButton() {
}

void CalcButton::concatStr(std::string s) {
	str += s;
}

void CalcButton::processNum(std::string num) {
	concatStr(num);
}
void CalcButton::processOprNDot(std::string s) {
	if (s.compare(".") == 0) {
		concatStr(s);
	}
	else {
		concatStr(" ");
		concatStr(s);
		concatStr(" ");
	}
}
void CalcButton::processMC() {
	//assume when user press mc, user already press result button
	CalcMemory::mcPressed(std::to_string(CalcMemory::ans));
}
void CalcButton::processMR() {
	if (CalcMemory::isQFilled) {
		CalcMemory::mrPressed();
	}
	else {

	}
	
}
void CalcButton::processClear() {
	str = "";
	CalcMemory::clearPressed();
}

void CalcButton::processAns() {
	if (CalcMemory::isAnsFilled) {
		concatStr(std::to_string(CalcMemory::ans));
	}
	else {

	}
}

void CalcButton::processRes() {
	CalcMemory::isAnsFilled = true;
	std::string res;
	if (p.validate(str)) {
		res = p.minusConversion(str);
		res = p.toPostfix(res);
		CalcMemory::ans = p.calculate(res);
		str = std::to_string(CalcMemory::ans);
	}
	else {

	}
}