#include "stdafx.h"
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	bitset<8> bit1;
	bit1.reset();
	bit1 = 127;

	bitset<8> bit2;
	bit2.reset();
	bit2 = 0x20; // 32
	
	bitset<8> bit3 = bit1 & bit2;
	bitset<8> bit4 = bit1 | bit2;
	bitset<8> bit5 = bit1 ^ bit2;
	bitset<8> bit6 = ~bit1;
	bitset<8> bit7 = bit2 << 1;
	bitset<8> bit8 = bit2 >> 1;

	cout << "bit1 & bit2 : " << bit3 << ", " << bit3.to_ulong() << endl;
	cout << "bit1 | bit2 : " << bit4 << ", " << bit4.to_ulong() << endl;
	cout << "bit1 ^ bit2 : " << bit5 << ", " << bit5.to_ulong() << endl;
	cout << "~bit1: " << bit6 << ", " << bit6.to_ulong() << endl;
	cout << "bit2 << 1: " << bit7 << ", " << bit7.to_ulong() << endl;
	cout << "bit2 >> 1: " << bit8 << ", " << bit8.to_ulong() << endl;

	return 0;
};
