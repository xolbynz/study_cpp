#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	pair<string, int> data("¹éÁ¦ ±ÙÃÊ°í¿Õ", 13);

	cout << data.first << " " << data.second << "´ë¿Õ" << endl;
	
	return 0;
}