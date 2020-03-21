#ifndef _CALCBUTTON_H_
#define _CALCBUTTON_H_
#include "CalcMemory.h"
#include "Parser.hpp"
class CalcButton {
public:
	static std::string str;

	CalcButton();

	static void concatStr(std::string s);

	static void processNum(std::string num);
	static void processOprNDot(std::string s);
	static void processMC();
	static void processMR();
	static void processClear();
	static void processAns();
	static void processRes();
};
#endif