#include "stdafx.h"
#include <iostream>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	int size = fs::file_size("�������� ����.txt");

	cout << "���� ũ�� : " << size << "����Ʈ" << endl;

	return 0;
}
