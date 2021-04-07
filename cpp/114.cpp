#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Info
{
public:
	Info() { };

public:
	string name_;
	int year_;
};

class GoodKing : public Info
{
public:
	GoodKing(const string country) : country_(country) {};
	void Display()
	{
		cout << country_ << " " << name_ << " ���� ���� BC : " << year_ << endl;
	}

private:
	string country_;
};

class BadKing : public Info
{
public:
	BadKing(const string country) : country_(country) {};
	void Display()
	{
		cout << country_ << " " << name_ << " ���� ���� : " << year_ << endl;
	}

private:
	string country_;
};

int main()
{
	GoodKing king1("������");
	king1.name_ = "�ܱ��հ�";
	king1.year_ = 2333;

	BadKing king2("���");
	king2.name_ = "������";
	king2.year_ = 1330;

	king1.Display();
	king2.Display();

	return 0;
}