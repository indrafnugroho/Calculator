#include "CalcButton.h"

std::string CalcButton::str = "";
int CalcButton::ans = 1000000;
bool CalcButton::isAnsFilled = false;

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

}
void CalcButton::processMR() {

}
void CalcButton::processClear() {
	str = "";
	ans = 1000000;
	isAnsFilled = false;
}

void CalcButton::processAns() {
	if (isAnsFilled) {
		std::string s;
		s = std::to_string(ans);
		concatStr(s);
	}
	else {

	}
}

void CalcButton::processRes() {

}