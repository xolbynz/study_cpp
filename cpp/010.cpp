#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	const int kArraySize = 3;

	int founding[kArraySize];
	founding[0] = 918;
	founding[1] = 1392;
	founding[2] = 1948;

	cout << "��� �Ǳ� ���� : " << founding[0] << endl;
	cout << "���� �Ǳ� ���� : " << founding[1] << endl;
	cout << "�ѱ� �Ǳ� ���� : " << founding[2] << endl;

	return 0;
}
