#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	time_t start = time(NULL); 
	time_t finish = time(NULL);
	
	int pass_int = 1;

	time(&start);
	
	for (int i = 1; i < 100000; i++)
	{
		for (int j = 1; j < 100000; j++)
			pass_int += 1;
	}
	
	time(&finish);

	cout << "1을 100억 번 더하는 시간 : " << difftime(finish, start) << "초\n";


	return 0;
};
