#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double x = 5.7;
	int div1 = static_cast<int>(x / 5);
	double mod1 = 5.7 - 5 * static_cast<int>(x / 5);

	int y = 10;
	int div2 = static_cast<int>(y / 2);
	double mod2 = y % 2;

	cout << "5.7 / 5 = ¸ò : " << div1 << ", ³ª¸ÓÁö : " << mod1 << endl;
	cout << "10 / 2 = ¸ò : " << div2 << ", ³ª¸ÓÁö : " << mod2 << endl;
	
	return 0;
};
