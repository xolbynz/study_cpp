#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> data({ 1, 2, 3 });

	for (vector<int>::iterator iter = data.begin();
		iter != data.end();
		++iter)
	{
		cout << *iter << ", ";
	}

	for (auto iter = data.cbegin();
		iter != data.cend();
		++iter)
	{
		cout << *iter << ", ";
	}

	for (auto iter = data.rbegin();
		iter != data.rend();
		++iter)
	{
		cout << *iter << ", ";
	}

	data.clear();

	return 0;
}