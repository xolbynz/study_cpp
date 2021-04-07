#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool EvenOdd(int arg)
{
	return arg % 2 == 0 ? true : false;
}

int main()
{
	vector<int> data = { 8, 27, 35, 49 };
	
	if (any_of(data.begin(), data.end(), EvenOdd))
		cout << "data : ¦���� �����մϴ�." << endl;

	if (any_of(data.begin(), data.end(), [](int i) { return i < 10; }))
		cout << "data :10���� ���� ���� �ֽ��ϴ�." << endl;

	return 0;
}