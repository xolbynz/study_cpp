#include <iostream>

using namespace std;

class Temp {
	int no;
	bool is_on;
};

int main()
{
	cout << "char ũ�� : " << sizeof('p') << endl;
	cout << "int ũ�� : " << sizeof(10) << endl;
	cout << "double ũ�� : " << sizeof(10.0) << endl;
	cout << "Ŭ���� ũ�� : " << sizeof(Temp) << endl;

	return 0;
};
