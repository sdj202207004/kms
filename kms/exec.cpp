#include <iostream>
#include "pri.h"
#include "api.h"
//강민수 브랜치명 : dev/api
//파일 : api.cpp, api.h

//심동준 브랜치명 : dev/pri
//파일 : pri.cpp, pri.h


int main() {

	api api;
	api.initUser();
	api.randomCom();
	pri pri(api);

	pri.printUser();
	pri.printCom();
	pri.printResult();
	return 0;
}