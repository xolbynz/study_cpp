#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
	KingInfo()
	{
		name_ = "조선 예종 이황";
	};

public:
	string GetName() const
	{
		return name_;
	}

private:
	string name_;
};

int main()
{
	KingInfo king_info;

	cout << king_info.GetName() << endl;

	return 0;
}