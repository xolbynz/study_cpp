#include "stdafx.h"
#include <iostream>

using namespace std;

class Landload
{
public:
	void IamLandload() { cout << "�ǹ����Դϴ�." << endl; }
};

class Tenant
{
public:
	void IamTenant() { cout << "�������Դϴ�." << endl; }
};

class Nation : public Landload, public Tenant
{
public:
	void Who()
	{
		cout << "���� ";

		if (is_landload == true)
			IamLandload();
		else
			IamTenant();
	}

public:
	bool is_landload;
};

int main()
{
	Nation nation;
	nation.is_landload = true;
	nation.Who();

	return 0;
}
