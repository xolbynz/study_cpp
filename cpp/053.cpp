#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string seven_war = "임진왜란";
	string korea_war = "한국전쟁";

	if (seven_war.compare(korea_war) == 0)
		cout << "같은 문자열입니다\n";
	else
		cout << "다른 문자열입니다\n";
	
	return 0;
};
