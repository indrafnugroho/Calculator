#ifndef _CALCMEMORY_H_
#define _CALCMEMORY_H_

#include <queue>
#include <string>

#pragma once
class CalcMemory {
public:
	static std::queue <std::string> q;
	static int ans;
	static bool isAnsFilled;
	static bool isQFilled;
	static std::string lastMR;

	CalcMemory();
	
	static void emptyQueue();
	static void mcPressed(std::string s);
	static void mrPressed();
	static void clearPressed();
};

#endif
