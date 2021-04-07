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
	GoodKing() { achieve = "백제 중흥 군주 근초고왕"; };
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
		//cout << achieve << endl; // 에러
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