#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int data[10] = { 5, 19, 76, 3, 10, 89, 54, 43, 2, 17 };

	for (int i = 0; i < 10; i++)
	{
		if (data[i] % 2 == 0)
			cout << i << " : " << data[i] << "�� ¦���Դϴ�." << endl;
		else
			cout << i << " : " << data[i] << "�� Ȧ���Դϴ�." << endl;
	}

	return 0;
}
