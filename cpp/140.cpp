#include "stdafx.h"
#include <iostream>

using namespace std;

enum State
{
	kOpen,
	kClose,
	kDisconnect
};

typedef State state_;

struct Status
{
	state_ machine1;
	state_ machine2;
} status_;

int main()
{
	status_.machine1 = kOpen;
	status_.machine2 = kDisconnect;

	cout << "상태 : " << status_.machine1 << endl;
	cout << "상태 : " << status_.machine2 << endl;

	return 0;
}