#include "api.h"
#include <iostream>
#include <time.h>

//���� �� �Է� �ޱ�
void api::initUser() {
	int input;

	std::cout << "����(0), ����(1), ��(2)�� �����Ͻÿ� : ";
	std::cin >> input;

	if (input >= 0 && input <= 2) {
		user = input;
	}
}

//com ������ ����
void api::randomCom() {
	srand(time(NULL)));
	com = rand() % 3;
}

//���� �Ǻ�
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