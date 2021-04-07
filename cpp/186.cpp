#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	cout << fdim(-1.0, 0.0) << ", ";
	cout << fdim(1.0, 0.0) << ", ";
	cout << fdim(0.0, 0.0) << ", ";
	cout << fdim(5, 1) << ", ";
	cout << fdim(6, 15) << ", ";
	cout << fdim(4.9, 1.1) << ", ";
	cout << fdim(5.9, 20.1) << endl;

	return 0;
}