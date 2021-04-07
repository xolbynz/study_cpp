#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class GoodKing;
class BadKing;

class Info
{
	friend class GoodKing;

public:
	Info() { };

private:
	string achieve;
};

class GoodKing : Info
{
public:
	GoodKing() { achieve = "���� ���� ���� ���ʰ��"; };
	void Display()
	{
		cout << achieve << endl;
	}
};

class BadKing : public Info
{
public:
	BadKing() {};
	void Display()
	{
		//cout << achieve << endl; // ����
	}
};

int main()
{
	GoodKing king1;
	king1.Display();

	BadKing king2;
	king2.Display();
	
	return 0;
}