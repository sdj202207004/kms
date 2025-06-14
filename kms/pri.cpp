#include <iostream>
#include "pri.h"

pri::pri(api api) {
	this->user = api.getUser();
	this->com = api.getCom();
	this->result = api.result();
}

pri::~pri() {
	std::cout << "������ ���� �մϴ�." << std::endl;
}

void pri::printUser() {
	std::cout << "������ ����: ";
	if (user == 0) {
		std::cout << "����" << std::endl;
	}
	else if (user == 1) {
		std::cout << "����" << std::endl;
	}
	else {
		std::cout << "��" << std::endl;
	}
}

void pri::printCom() {
	std::cout << "��ǻ���� ���� : ";
	if (user == 0) {
		std::cout << "����" << std::endl;
	}
	else if (user == 1) {
		std::cout << "����" << std::endl;
	}
	else {
		std::cout << "��" << std::endl;
	}
}

void pri::printResult() {
	std::cout << "��� : ";
	if (result == 0) {
		std::cout << "���� �¸�!!!!!" << std::endl;
	}
	else if (result == 1) {
		std::cout << "���º�" << std::endl;
	}
	else {
		std::cout << "��ǻ�� �¸�;;;;;;;" << std::endl;
	}
}