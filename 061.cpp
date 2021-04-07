#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string sentence = "i like coding";
	
	sentence.erase(remove(sentence.begin(), sentence.end(), ' '), sentence.end());

	cout << sentence << endl;

	return 0;
};
