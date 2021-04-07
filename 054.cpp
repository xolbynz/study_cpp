#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string baekhap_war = "백합벌 전투 : 백제 왕자 부여창의 일기토로 유명한 전투";

	int rtn = baekhap_war.find("부여창");

	if (rtn > 0)
		cout << "문자열을 찾았습니다. 위치는 " << rtn << "입니다." <<  endl;
	else
		cout << "문자열을 찾을 수 없습니다." << endl;

	return 0;
};
