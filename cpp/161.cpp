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
	data.insert({ 5, "test1" });
	data.insert({ 3, "test2" });
	data.insert({ 11, "test3" });

	data[3] = "test 수정";

	auto result = data.find(11);

	if (result != data.end())
		cout << "== 검색 성공 : " << result->first << ", " << result->second << endl;
	else
		cout << "== 검색 실패!! ==" << endl;

	data.erase(5);

	Print(data);

	return 0;
}