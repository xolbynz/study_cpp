#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
	KingInfo() { };

public:
	void SetValue(const string name, const string son, int ascend)
	{
		name_ = name;
		son_ = son;
		ascend_ = ascend;
	}

	string GetNameSon() const
	{
		return name_ + "의 아들 " + son_;
	}

	string GetNameAscend() const
	{
		return name_ + "즉위 연도 " + to_string(ascend_) + "년";
	}

private:
	string name_;
	string son_;
	int ascend_;
};

int main()
{
	KingInfo king_info;
	king_info.SetValue("선조", "광해군", 1567);

	cout << king_info.GetNameSon() << endl;
	cout << king_info.GetNameAscend() << endl;

	return 0;
}