#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

struct Princess
{
	string name;
	string father;
	string birthday = "�� �� ����";
} Goryeo[2];

int main()
{
	Princess jungmyung;
	jungmyung.name = "�������";
	jungmyung.father = "���� ����";
	jungmyung.birthday = "1603�� 6�� 27��";

	Goryeo[0].name = "��������";
	Goryeo[0].father = "��� ����";
	Goryeo[1].name = "ȿ������";
	Goryeo[1].father = "��� ����";

	cout << " == ���� ���� == " << endl;
	cout << jungmyung.name << endl;
	cout << jungmyung.father << endl;
	cout << jungmyung.birthday << endl;

	cout << " == ��� ���� == " << endl;
	cout << Goryeo[0].name << endl;
	cout << Goryeo[0].father << endl;
	cout << Goryeo[0].birthday << endl << endl;
	cout << Goryeo[1].name << endl;
	cout << Goryeo[1].father << endl;
	cout << Goryeo[1].birthday << endl;

	return 0;
}