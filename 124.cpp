#include "stdafx.h"
#include <iostream>
#include <map>

using namespace std;

struct TmpStruct {
	int x = 0;
};

class TmpClass
{

};

int main()
{
	cout << boolalpha;

	cout << "== is_empty ==" << endl;
	cout << is_empty<TmpStruct>::value << ", ";
	cout << is_empty<TmpClass>::value << endl << endl;

	cout << "== is_array ==" << endl;
	cout << is_array<TmpStruct>::value << ", ";
	cout << is_array<map<int, double>>::value << ", ";
	cout << is_array<int[3]>::value << endl << endl;

	cout << "== is_same ==" << endl;
	cout << is_same<TmpStruct, TmpClass>::value << ", ";
	cout << is_same<int, signed int>::value << ", ";
	cout << is_same<int, bool>::value << ", ";
	cout << is_same<char, unsigned char>::value << endl << endl;

	return 0;
}