#include "stdafx.h"
#include <iostream>
#include <string>
#include <locale>
#include <algorithm>

using namespace std;

int main()
{
	string silla = "divided into the Three Kingdoms.";
	string joseon = "Yi Seong-gye, established Joseon in 1392.";

	transform(silla.begin(), silla.end(), silla.begin(), toupper);
	transform(joseon.begin(), joseon.end(), joseon.begin(), tolower);

	char lower_ch = 'g';
	char upper_ch = 'B';
	
	lower_ch= toupper(lower_ch);
	upper_ch = tolower(upper_ch);

	cout << "문자열 대문자로 변환 : " << silla << endl;
	cout << "문자열 소문자로 변환 : " << joseon << endl;
	cout << "문자 대문자로 변환 : " << lower_ch << endl;
	cout << "문자 소문자로 변환 : " << upper_ch << endl;

	return 0;
};
