#include "stdafx.h"
#include <iostream>

using namespace std;

int x = 10;

int Func1()
{
	int y = x + 10;

	return y;
}

int Func2()
{
	int x = 100;

	return x;
}

int main()
{
	cout << "y = " << Func1() << endl;
	cout << "x = " << Func2() << endl;
	cout << "x = " << x << endl;
		
	return 0;
}