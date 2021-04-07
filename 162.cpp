#include "stdafx.h"
#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main()
{
	bitset<8> data1(100);
	bitset<8> data2(0x78);
	bitset<8> data3(string("11110000"));

	cout << "data1 : " << data1 << endl;
	cout << "data2 : " << data2 << endl;
	cout << "data3 : " << data3 << endl;

	data1.set();

	cout << endl << "== data1 ==" << endl;
	cout << "data1 all: " << data1.all() << '\n';
	cout << "data1 any: " << data1.any() << '\n';
	cout << "data1 none: " << data1.none() << '\n';

	data2.reset();

	cout << endl << "== data2 ==" << endl;
	cout << "data2 all: " << data2.all() << '\n';
	cout << "data2 any: " << data2.any() << '\n';
	cout << "data2 none: " << data2.none() << '\n';

	return 0;
}
