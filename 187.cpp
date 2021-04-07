#include "stdafx.h"
#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
	regex re1(R"(\d+)");
	string str1("1234");

	bool is_match = regex_match(str1, re1);

	cout << boolalpha;
	cout << "is_match = " << is_match << endl;

	regex re2(R"(\d+)");
	string str2 = "ab 123456 cd ef";

	smatch match_info;
	regex_search(str2, match_info, re2);

	cout << "number : " << match_info.str() << endl;

	return 0;
}