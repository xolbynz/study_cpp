#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	int y = 20;

	bool is_x = true;
	bool is_y = false;

	if (is_x == true && is_y == true)
		cout << "is_x && is_y = " << "true" << endl;
	else
		cout << "is_x && is_y = " << "false" << endl;

	if (x == 10 || is_x == false)
		cout << "x�� 10�̰ų� is_x�� true�Դϴ�" << endl;
	else
		cout << "x�� 10�� �ƴϸ� is_x�� false�� �ƴմϴ�" << endl;

	if (!is_y)
		cout << "is_y ���� ���� false�Դϴ�" << endl;
	else
		cout << "is_y ���� ���� true�Դϴ�" << endl;

	return 0;
};
