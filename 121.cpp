#include "stdafx.h"
#include <iostream>

using namespace std;

class Base
{
public:
	void Display() { cout << "��� 16��� ����" << endl; }
};

class Derived : Base
{
public:
	void Display() { cout << "��� 17��� ����" << endl; }
};

int main()
{
	Derived child;
	child.Display();

	return 0;
}
