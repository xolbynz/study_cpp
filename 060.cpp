#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string str1 = "i like coding";
	string str2 = move(str1);

	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;

	vector<int> v1 = { 1, 2, 3 };
	vector<int> v2 = move(v1);

	cout << "v1 size : " << v1.size() << endl;
	cout << "v2 size : " << v2.size() << endl;

	return 0;
}
