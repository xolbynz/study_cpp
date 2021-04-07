#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main()
{
	std::array<int, 5> data{ 5, 9, 4, 1, 7 };

	auto result1 = minmax_element(data.begin(), data.end());

	std::cout << "최소값 : " << *result1.first;
	std::cout << ", 위치 : " << (result1.first - data.begin()) << '\n';
	std::cout << "최대값 " << *result1.second;
	std::cout << ", 위치 : " << (result1.second - data.begin()) << '\n';

	auto result2 = minmax_element(data.begin(), data.end(), [](int arg1, int arg2) {
		return arg1 < arg2;
	});

	std::cout << "최소값 : " << *result2.first;
	std::cout << ", 위치 : " << (result2.first - data.begin()) << '\n';
	std::cout << "최대값 " << *result2.second;
	std::cout << ", 위치 : " << (result2.second - data.begin()) << '\n';

	return 0;
}