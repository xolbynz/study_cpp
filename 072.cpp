#include "stdafx.h"
#include <iostream>

using namespace std;

int Temp1(const int arg)
{
	int number = 20;

	return number + 1;
}

int Temp2(const int arg)
{
	int number = arg;

	return number + 1;
}

int main()
{
	int number = 10;

	int rtn1 = Temp1(number);
	int rtn2 = Temp2(number);

	cout << "���� �Լ� number : " << number << endl;
	cout << "Temp1 �Լ� number : " << rtn1 << endl;
	cout << "Temp2 �Լ� number : " << rtn2 << endl;

	return 0;
};
