#include "CalcButton.h"

std::string CalcButton::str = "";

CalcButton::CalcButton() {
}

void CalcButton::concatStr(std::string s) {
	str += s;
}

void CalcButton::processNum(std::string num) {
	concatStr(num);
}
void CalcButton::processOprNDot(std::string s) {
	if (str.compare(".") == 0) {
		concatStr(s);
	}
	else {
		concatStr(" ");
		concatStr(s);
		concatStr(" ");
	}
}
void CalcButton::processMC() {
	std::string s;
	//process str in Button using Parser then put it into s
	CalcMemory::mcPressed(s);
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
	//process str using parser
	//masukin nilainya ke ans
	str = "";
}