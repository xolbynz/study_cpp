#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	pair<string, int> data("���� ���ʰ��", 13);

	cout << data.first << " " << data.second << "���" << endl;
	
	return 0;
}