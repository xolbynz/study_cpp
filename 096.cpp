#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() 
{
	const string file_name = "096.txt";

	ofstream file_out;
	file_out.open(file_name, ifstream::out);

	file_out << "°í±¸·Á À¯¸®¿Õ°ú È²Á¶°¡" << endl;
	file_out << "»ç¶ûÀÇ ¾ÆÇÄÀ» ½ÂÈ­ÇÑ ½Ã" << endl;

	file_out.close();
	
	ifstream file_in;
	file_in.open(file_name, ifstream::in);

	string line;

	while (getline(file_in, line))
		cout << line << endl;

	file_in.close();

	return 0;
}