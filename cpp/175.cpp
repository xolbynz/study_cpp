#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main()
{
	std::array<int, 5> data{ 5, 9, 4, 1, 7 };

	auto result1 = minmax_element(data.begin(), data.end());

	std::cout << "�ּҰ� : " << *result1.first;
	std::cout << ", ��ġ : " << (result1.first - data.begin()) << '\n';
	std::cout << "�ִ밪 " << *result1.second;
	std::cout << ", ��ġ : " << (result1.second - data.begin()) << '\n';

	auto result2 = minmax_element(data.begin(), data.end(), [](int arg1, int arg2) {
		return arg1 < arg2;
	});

	std::cout << "�ּҰ� : " << *result2.first;
	std::cout << ", ��ġ : " << (result2.first - data.begin()) << '\n';
	std::cout << "�ִ밪 " << *result2.second;
	std::cout << ", ��ġ : " << (result2.second - data.begin()) << '\n';

	return 0;
}