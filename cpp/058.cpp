#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sentence = "i coding";
	sentence.insert(2, "hate ");
	cout << sentence << endl;

	sentence.insert(7, "or like ");
	cout << sentence << endl;

	return 0;
};
