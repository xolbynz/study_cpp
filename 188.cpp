#include "stdafx.h"
#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
	regex re1(R"(l|i|k|e)");
	regex re2(R"(\D)");
	regex re3(R"(\s)");
	string str = "i like coding";

	string result1 = regex_replace(str, re1, "[$&]");
	string result2 = regex_replace(str, re1, "*");
	string result3 = regex_replace(str, re2, "_$&_");
	string result4 = regex_replace(str, re3, "(space)");

	cout << "result1 : " << result1 << endl;
	cout << "result2 : " << result2 << endl;
	cout << "result3 : " << result3 << endl;
	cout << "result4 : " << result4 << endl;

	return 0;
}