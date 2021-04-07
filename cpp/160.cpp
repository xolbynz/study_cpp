#include "stdafx.h"
#include <iostream>
#include <map>
#include <string>

using namespace std;

void Print(const map<int, string> &data)
{
	cout << "== Print == " << endl;

	for (auto iter = data.begin();
		iter != data.end();
		++iter)
		cout << iter->first << " : " << iter->second << ", ";

	cout << endl;
}

int main()
{
	map<int, string> data;
	data.insert({ 0, "ù��°" });
	data.insert({ 1, "�ι�°" });

	Print(data);

	auto ret = data.insert({ 1, "����°" });

	if (ret.second == true)
		cout << "== ������ �߰� ���� ==" << endl;
	else
		cout << "== ������ �߰� ���� ==" << endl;

	data.at(0) = "����1";
	
	Print(data);

	return 0;
}