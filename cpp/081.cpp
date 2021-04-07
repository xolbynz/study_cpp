#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int data1[3] = { 0, 1, 2 };
	int data2[2][2]{ { 0, }, };
	int data3[2][2];

	cout << "== data1 ==" << endl;
	for (int i = 0; i < 3; i++)
		cout << "data1[" << i << "] = " << data1[i] << endl;

	cout << endl << "== data2 ==" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
			cout << "data2[" << i << "][" << j << "] = " 
			<< data2[i][j] << endl;
	}

	cout << endl << "== data3 ==" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
			cout << "data3[" << i << "][" << j << "] = "
			<< data3[i][j] << endl;
	}

	return 0;
}