#include "stdafx.h"
#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = experimental::filesystem;

int main() 
{
	cout << "������Ʈ ���� : " << fs::current_path() << endl;

	return 0;
}