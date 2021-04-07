#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void Minus(const int x, const int y)
{
	cout << "x - y = " << x - y << endl;
}

int Plus(const int x, const int y)
{
	return x + y;
}

int main()
{
	Minus(10, 5);

	cout << "x + y = " << Plus(2, 6) << endl;

	return 0;
}
