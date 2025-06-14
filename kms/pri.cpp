#include <iostream>
#include "pri.h"

pri::pri(api api) {
	this->user = api.getUser();
	this->com = api.getCom();
	this->result = api.result();
}

pri::~pri() {
	std::cout << "게임을 종료 합니다." << std::endl;
}

void pri::printUser() {
	std::cout << "유저의 선택: ";
	if (user == 0) {
		std::cout << "가위" << std::endl;
	}
	else if (user == 1) {
		std::cout << "바위" << std::endl;
	}
	else {
		std::cout << "보" << std::endl;
	}
}

void pri::printCom() {
	std::cout << "컴퓨터의 선택 : ";
	if (user == 0) {
		std::cout << "가위" << std::endl;
	}
	else if (user == 1) {
		std::cout << "바위" << std::endl;
	}
	else {
		std::cout << "보" << std::endl;
	}
}

void pri::printResult() {
	std::cout << "결과 : ";
	if (result == 0) {
		std::cout << "유저 승리!!!!!" << std::endl;
	}
	else if (result == 1) {
		std::cout << "무승부" << std::endl;
	}
	else {
		std::cout << "컴퓨터 승리;;;;;;;" << std::endl;
	}
}