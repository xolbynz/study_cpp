#include "stdafx.h"
#include <iostream>

using namespace std;

class Landload
{
public:
	void IamLandload() { cout << "�ǹ����Դϴ�." << endl; }
};

class MaleMonkey
{
public:
	void Favorite() { cout << "Favorite : Female Monkey" << endl; }
};

class Nation : public Landload
{
public:
	void Who()
	{
		cout << "�ȳ��ϼ���. ";
		IamLandload();
	}
};

int main()
{
	Nation nation;
	nation.Who();

	return 0;
}