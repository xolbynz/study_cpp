#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
	KingInfo() { };

public:
	void SetValue(const string value)
	{
		if (value.empty() == false)
			value_ = value;
		else
			cout << "잘못된 인자!!" << endl;
	}

	string GetValue() const
	{
		if (value_.empty() == false)
			return value_;
		else
			return "설정을 먼저 해주세요.";
	}

private:
	string value_;
	int number_;
};

int main()
{
	KingInfo king_info1;
	king_info1.SetValue("조선 중종 이역");

	KingInfo king_info2;
	king_info2.SetValue("조선 인종 이호");
	
	//king_info1.value_ = "조선 명종 이환"; // 에러

	cout << king_info1.GetValue() << endl;
	cout << king_info2.GetValue() << endl;

	return 0;
}