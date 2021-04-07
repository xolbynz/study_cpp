#include "stdafx.h"
#include <iostream>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	int size = fs::file_size("연개수영 전설.txt");

	cout << "파일 크기 : " << size << "바이트" << endl;

	return 0;
}
