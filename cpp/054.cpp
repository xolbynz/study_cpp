#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string baekhap_war = "���չ� ���� : ���� ���� �ο�â�� �ϱ���� ������ ����";

	int rtn = baekhap_war.find("�ο�â");

	if (rtn > 0)
		cout << "���ڿ��� ã�ҽ��ϴ�. ��ġ�� " << rtn << "�Դϴ�." <<  endl;
	else
		cout << "���ڿ��� ã�� �� �����ϴ�." << endl;

	return 0;
};
