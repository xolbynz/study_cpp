#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string publisher = "������ȭ��";
	string language = "C++";

	int x = 10;
	int y = 10;

	if (publisher != language)
		cout << "�� ������ ���� �ʽ��ϴ�." << endl;
	else
		cout << "�� ������ �����ϴ�." << endl;
	
	if (x >= y)
		cout << "x�� y���� ũ�ų� �����ϴ�" << endl;
	else
		cout << "x�� y���� ũ�ų� ���� �ʽ��ϴ�" << endl;

	if (x <= 20)
		cout << "x�� 20���� �۰ų� �����ϴ�" << endl;
	else
		cout << "x�� 20���� �۰ų� ���� �ʽ��ϴ�" << endl;

	return 0;
};