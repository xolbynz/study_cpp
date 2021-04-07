#include "stdafx.h"
#include <iostream>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	fs::copy("연개수영 전설.txt", "(복사)연개수영 전설.txt");
	fs::remove("연개수영 전설.txt");
	
	return 0;
}
