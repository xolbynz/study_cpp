#include "stdafx.h"
#include <iostream>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	fs::copy("�������� ����.txt", "(����)�������� ����.txt");
	fs::remove("�������� ����.txt");
	
	return 0;
}
