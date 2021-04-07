#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int number = 0;

	while (number < 10)
	{
		number++;

		if (number % 3 == 0)
			continue;
		else
			cout << "number °ª : " << number << endl;
	}

	return 0;
};
