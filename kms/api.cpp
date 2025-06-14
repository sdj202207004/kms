#include "api.h"
#include <iostream>
#include <time.h>

//유저 값 입력 받기
void api::initUser() {
	int input;

	std::cout << "가위(0), 바위(1), 보(2)를 선택하시오 : ";
	std::cin >> input;

	if (input >= 0 && input <= 2) {
		user = input;
	}
}

//com 랜덤값 생성
void api::randomCom() {
	srand(time(NULL)));
	com = rand() % 3;
}

//승자 판별
int api::result() {
	if (user == com) {
		return 1;
	}
	else if ((user == 0 && com == 2) || (user == 1 && com == 0) || (user == 2 && com == 1)) {
		return 0;
	}
	else {
		return 2;
	}
}

int api::getUser() {
	return user;
}

int api::getCom() {
	return com;
}