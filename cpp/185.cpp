#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	int y = 20;
	double a = 12.2;
	double b = 5.6;
	
	cout << boolalpha;
	cout << isless(20, 11) << endl;
	cout << isless(x, y) << endl;
	cout << isless(a, b) << endl;
	cout << isless(x, b) << endl;

	return 0;
}