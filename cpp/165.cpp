#include "stdafx.h"
#include <iostream>

using namespace std;

auto func1 = []() { cout << "Lambda Function" << endl; };
auto func2 = [](int x, int y)->bool { return x < y; };

int main()
{
	int x = 2;

	auto func3 = [=](int y) {
		func1();
		cout << "x < y = " << func2(x, y) << endl;
	};

	func3(4);

	auto func4 = [=](int y) { return x * x + y * y; };

	cout << "x * x + y * y = " << func4(5) << endl;

	return 0;
}
