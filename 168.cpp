#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> data({ 10, 20, 30, 40 });

	cout << "== for_each ���� ==" << endl;

	for_each(data.begin(), data.end(), [](int i)
	{
		cout << i << ", ";
	});

	cout << endl << "== for_each ���� �Լ�1 ==" << endl;

	auto Print = [](int x) { cout << x + x << ", "; };

	for_each(data.begin(), data.end(), Print);

	cout << endl << "== for_each ���� �Լ�2 ==" << endl;

	int y = 11;

	for_each(data.begin(), data.end(), [y](int x) { cout << x + y << " ,"; });

	cout << endl;

	return 0;
}