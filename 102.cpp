#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream stream;
	stream.open("C:\\BOOTNXT");

	if (stream.good() == true)
		cout << "������ �����մϴ�" << endl;
	else
		cout << "������ �����ϴ�" << endl;

	stream.close();

	return 0;
}