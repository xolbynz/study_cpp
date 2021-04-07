#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 5; i++)
		cout << "³­¼ö : " << rand() << endl;

	return 0;
};
