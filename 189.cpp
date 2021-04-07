#include "stdafx.h"
#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
	regex re1(R"(\S)");
	regex re2(R"(\t)");
	string str = "i	like	coding";

	string result1 = regex_replace(str, re1, "[$&]", regex_constants::format_first_only);
	string result2 = regex_replace(str, re2, "(Tab)", regex_constants::format_first_only);
	
	cout << "result1 : " << result1 << endl;
	cout << "result2 : " << result2 << endl;

	return 0;
}