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
		cout << country_ << " " << name_ << " 즉위 연도 BC : " << year_ << endl;
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
		cout << country_ << " " << name_ << " 즉위 연도 : " << year_ << endl;
	}

private:
	string country_;
};

int main()
{
	GoodKing king1("고조선");
	king1.name_ = "단군왕검";
	king1.year_ = 2333;

	BadKing king2("고려");
	king2.name_ = "충혜왕";
	king2.year_ = 1330;

	king1.Display();
	king2.Display();

	return 0;
}