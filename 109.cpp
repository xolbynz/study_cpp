#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

class TempClass
{
public:
	TempClass()
	{
		cout << "������ ȣ��" << endl;
	};

	~TempClass()
	{
		cout << "�Ҹ��� ȣ��" << endl;
	}
};

int main()
{
	TempClass *temp_class;

	delete temp_class;
	temp_class = nullptr;
	
	return 0;
}