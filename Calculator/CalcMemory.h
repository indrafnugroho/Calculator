#ifndef _CALCMEMORY_H_
#define _CALCMEMORY_H_

#include <queue>
#include <string>

#pragma once
class CalcMemory {
private:
	static std::string str;
	static std::queue <std::string> q;
	static std::string lastMR;
	static int ans;
	static bool isAnsFilled;

public:
	std::string getStr();
	std::string getLastMR();
	int getAns();
	bool getIsAnsFilled();

	void setStr(std::string s);
	void setLastMR(std::string s);
	void setAns(int a);
	void setIsAnsFilled(bool b);
	
	bool isQEmpty();
	void concatStr(std::string s);
	void popBackStr();
	void emptyQueue();
	void pushQ(std::string s);
	std::string popQ();
};

#endif
