#include "stdafx.h"
#include <iostream>

using namespace std;

extern int g_number = 100;

int Func1()
{
	return g_number++;
}

int Func2()
{
	return g_number++;
}

int main()
{
	int number = g_number++;

	cout << "���� number : " << number << endl;
	cout << "Func1 number : " << Func1() << endl;
	cout << "Func2 number : " << Func2() << endl;

	return 0;
};
