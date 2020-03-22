#ifndef _CALCBUTTON_H_
#define _CALCBUTTON_H_

#include "CalcMemory.h"
#include "Parser.hpp"

class CalcButton {
public:
	void processNum(std::string num);
	void processOprNDot(std::string s);
	void processMC();
	void processMR();
	void processClear();
	void processAns();
	void processRes();
	void processAC();
	void processDel();
};
#endif