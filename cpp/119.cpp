#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Ondal {
public:
	friend void GetYear(Ondal ondal)
	{
		cout << "�ƴܼ� ���� ���� : " << ondal.year_ << endl;
	}

	void SetYear(int year) { year_ = year; }

private:
	int year_;
};

int main()
{
	Ondal ondal;
	ondal.SetYear(590);

	GetYear(ondal);
	
	return 0;
}