#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int x = 1;
	int y = 2;
	int z = 0;

	z = x > y ? x : y;
	
	cout << "x�� y�� �� ū ���� : " << z << endl;

	return 0;
};
