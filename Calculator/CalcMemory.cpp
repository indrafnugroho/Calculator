#include "CalcMemory.h"

std::queue <std::string> CalcMemory::q;
int CalcMemory::ans = 1000000;
bool CalcMemory::isAnsFilled = false;
bool CalcMemory::isQFilled = false;
std::string lastMR = "";

CalcMemory::CalcMemory() {}

void CalcMemory::emptyQueue() {
	std::queue <std::string> empty;
	std::swap(q, empty);
}
void CalcMemory::mcPressed(std::string s) {
	isQFilled = true;
	q.push(s);
}
void CalcMemory::mrPressed() {
	if (!q.empty()) {
		lastMR = q.front();
		q.pop();

		if (q.empty()) isQFilled = false;
	}
	else {

	}
}
void CalcMemory::clearPressed() {
	ans = 1000000;
	isAnsFilled = false;
	emptyQueue();
	isQFilled = false;
	lastMR = "";
}