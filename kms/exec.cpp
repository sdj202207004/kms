#include <iostream>
#include "pri.h"
#include "api.h"
//���μ� �귣ġ�� : dev/api
//���� : api.cpp, api.h

//�ɵ��� �귣ġ�� : dev/pri
//���� : pri.cpp, pri.h


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