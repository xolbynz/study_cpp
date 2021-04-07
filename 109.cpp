#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

class TempClass
{
public:
	TempClass()
	{
		cout << "생성자 호출" << endl;
	};

	~TempClass()
	{
		cout << "소멸자 호출" << endl;
	}
};

int main()
{
	TempClass *temp_class;

	delete temp_class;
	temp_class = nullptr;
	
	return 0;
}