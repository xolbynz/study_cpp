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

	cout << "���ڿ� �빮�ڷ� ��ȯ : " << silla << endl;
	cout << "���ڿ� �ҹ��ڷ� ��ȯ : " << joseon << endl;
	cout << "���� �빮�ڷ� ��ȯ : " << lower_ch << endl;
	cout << "���� �ҹ��ڷ� ��ȯ : " << upper_ch << endl;

	return 0;
};
