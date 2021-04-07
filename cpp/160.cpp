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
	data.insert({ 0, "첫번째" });
	data.insert({ 1, "두번째" });

	Print(data);

	auto ret = data.insert({ 1, "세번째" });

	if (ret.second == true)
		cout << "== 데이터 추가 성공 ==" << endl;
	else
		cout << "== 데이터 추가 실패 ==" << endl;

	data.at(0) = "수정1";
	
	Print(data);

	return 0;
}