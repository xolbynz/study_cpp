#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string seven_war = "�����ֶ�";
	string korea_war = "�ѱ�����";

	if (seven_war.compare(korea_war) == 0)
		cout << "���� ���ڿ��Դϴ�\n";
	else
		cout << "�ٸ� ���ڿ��Դϴ�\n";
	
	return 0;
};
