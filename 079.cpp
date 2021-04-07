#include "stdafx.h"
#include <iostream>

using namespace std;

enum Status
{
	normal = 0,
	abnormal,
	disconnect = 100,
	close
};

int main()
{
	Status number = close;

	if (number == Status::normal)
		cout << "Status : normal" << endl;
	else if (number == abnormal)
		cout << "Status : abnormal" << endl;
	else if (number == 101)
		cout << "Status : disconnect" << endl;
	else
		cout << "Status : close" << endl;

	return 0;
}
