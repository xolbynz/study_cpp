#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<int> data1 = { 1, 3, 5, 7 };
	vector<string> data2 = { "ab", "cd", "ef" };
	
	if (all_of(data1.begin(), data1.end(), [](int i) { return i % 2; }))
		cout << "data1 : ��� Ȧ���Դϴ�." << endl;

	if (all_of(data1.begin(), data1.end(), [](int i) { return i < 10; }))
		cout << "data1 : ��� 10���� �۽��ϴ�." << endl;

	if (all_of(data2.begin(), data2.end(), [](string i) { return i.length() < 4 ? true : false; }))
		cout << "data2 : ��� ���̰� 4 �����Դϴ�." << endl;

	if (all_of(data2.begin(), data2.end(), [](string i) { return i.find('A'); }))
		cout << "data2 : ��� ���� A�� �������� �ʽ��ϴ�." << endl;

	return 0;
}