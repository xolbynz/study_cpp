#include "stdafx.h"
#include <iostream>

using namespace std;

int Plus(int arg1, int arg2)
{
	return arg1 + arg2;
}

double Plus(double arg1, double arg2)
{
	return arg1 + arg2;
}

int main()
{
	int number1 = Plus(2, 4);
	double number2 = Plus(3.4, 5.7);
	
	cout << "number1 : " << number1 << endl;
	cout << "number2 : " << number2 << endl;

	return 0;
}
