#include "stdafx.h"
#include <iostream>
#include <vector>
#include <regex>
#include <string>

using namespace std;

int main()
{
	vector<string> Korea = {
		"Republic of Korea",
		"republic of Korea",
		"Republic of korea",
		"republic of korea",
		"South Korea",
		"south korea",
		"South korea",
		"south Korea",
	};

	regex re("([Rr]epublic)\\s.*");

	smatch match_info;

	for (auto i : Korea)
	{
		if (regex_match(i, match_info, re))
			cout << match_info[0] << endl;
	}

	return 0;
}
