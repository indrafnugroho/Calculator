#include <string>
class CalcButton {
public:
	static std::string str;
	static int ans;
	static bool isAnsFilled;

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
