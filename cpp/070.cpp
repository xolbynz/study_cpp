#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int PointerFunc(vector<string> *info)
{
	if (info->empty() == true)
		return 0;
	else
		return sizeof(info);
}

int main()
{
	vector<string> message;
	message.push_back("��� �屺");
	message.push_back("ô�ذ�!");
	message.push_back("��ģ �̸���");
	message.push_back("... �����ϱ�");

	cout << "������ ���� ũ�� : " << PointerFunc(&message) << endl;
	cout << "���� ���� ũ�� : " << sizeof(message) << endl;

	return 0;
};
