#include "stdafx.h"
#include <iostream>

using namespace std;

class Rent
{
public:
	void Payment() { cout << "�Ӵ�Ḧ �޽��ϴ�." << endl; }
};

class Landload : public Rent
{
public:
	void GetMoney()
	{
		cout << "�ǹ��ֶ� ";
		Payment();
	}
};

int main()
{
	Landload master;
	master.GetMoney();

	return 0;
}