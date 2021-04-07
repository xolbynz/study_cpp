#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
	KingInfo()
	{
		value_ = "���� ���� ����";
	};

	KingInfo(const string value) 
	{
		value_ = value;
	};

	KingInfo(const int value)
	{
		value_ = "���걺 �������� : ";
		value_ += to_string(value);
	};
	
public:
	string GetValue() const
	{
		return value_;
	}

private:
	string value_;
};

int main()
{
	KingInfo king_info1;
	KingInfo king_info2("���� ���걺 ����");
	KingInfo king_info3(1494);

	cout << king_info1.GetValue() << endl;
	cout << king_info2.GetValue() << endl;
	cout << king_info3.GetValue() << endl;

	return 0;
}