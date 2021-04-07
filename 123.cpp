#include "stdafx.h"
#include <iostream>

using namespace std;

enum TmpEnum { };
enum class TmpEnumClass : int { };

int main()
{
	cout << boolalpha;

	cout << "== is_integral ==" << endl;
	cout << is_integral<TmpEnum>::value << ", ";
	cout << is_integral<TmpEnumClass>::value << ", ";
	cout << is_integral<signed int>::value << ", ";
	cout << is_integral<unsigned int>::value << ", ";
	cout << is_integral<double>::value << ", ";
	cout << is_integral<bool>::value << endl << endl;
	
	cout << "== is_enum ==" << endl;
	cout << is_enum<TmpEnum>::value << ", ";
	cout << is_enum<TmpEnumClass>::value << ", ";
	cout << is_enum<int>::value << endl << endl;

	cout << "== is_signed ==" << endl;
	cout << is_signed<TmpEnum>::value << ", ";
	cout << is_signed<signed int>::value << ", ";
	cout << is_signed<unsigned int>::value << endl << endl;

	cout << "== is_unsigned ==" << endl;
	cout << is_unsigned<TmpEnumClass>::value << ", ";
	cout << is_unsigned<int>::value << ", ";
	cout << is_unsigned<unsigned int>::value << endl;

	return 0;
}