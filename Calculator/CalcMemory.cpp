#include "CalcMemory.h"

std::string CalcMemory::str = "";
std::queue <std::string> CalcMemory::q;
std::string CalcMemory::lastMR = "";
float CalcMemory::ans = 1000000;
bool CalcMemory::isAnsFilled = false;

std::string CalcMemory::getStr() {
	return str;
}

std::string CalcMemory::getLastMR() {
	return lastMR;
}

float CalcMemory::getAns() {
	return ans;
}

bool CalcMemory::getIsAnsFilled() {
	return isAnsFilled;
}

void CalcMemory::setStr(std::string s) {
	str = s;
}

void CalcMemory::setLastMR(std::string s) {
	lastMR = s;
}

void CalcMemory::setAns(float a) {
	ans = a;
}

void CalcMemory::setIsAnsFilled(bool b) {
	isAnsFilled = b;
}

bool CalcMemory::isQEmpty() {
	return q.empty();
}

void CalcMemory::concatStr(std::string s) {
	str += s;
}

void CalcMemory::popBackStr() {
	if (str.size() > 0) str.pop_back();
}

void CalcMemory::emptyQueue() {
	std::queue <std::string> empty;
	std::swap(q, empty);
}

void CalcMemory::pushQ(std::string s) {
	q.push(s);
}

std::string CalcMemory::popQ() {
	std::string s = q.front();
	q.pop();
	return s;
}