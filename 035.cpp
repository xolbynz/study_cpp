#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "The Jin state was formed in southern Korea by the 3rd century BC";

	char find = 'a';

	int size = str.size();
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (str[i] == find)
			count++;
	}

	cout << "������ a ������ " << count << "�� �Դϴ�." << endl;

	return 0;
}
