#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int data[] = { 10, 20, 30, 40 };

	for each (int &i in data)
		i += 10;

	cout << "== for each ==" << endl;

	for each (const int i in data1)
		cout << i << ", ";
	
	cout << endl;

	return 0;
}