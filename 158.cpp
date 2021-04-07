#include "stdafx.h"
#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> data1;
	list<int> data2{ 3, 4, 5};

	data1.push_back(2);
	data1.push_back(7);

	data1.merge(data2);
	
	std::cout << "== List Merge ==" << endl;
	for (std::list<int>::iterator it = data1.begin(); it != data1.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << endl;

	data2 = { 3, 4, 5 };
	data1.splice(data1.begin(), data2);

	std::cout << "== List Splice ==" << endl;
	for (std::list<int>::iterator it = data1.begin(); it != data1.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << endl;

	return 0;
}