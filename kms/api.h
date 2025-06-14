#pragma once
#include <iostream>

class api
{
private:
	int user=0;
	int com=0;

public:
	int getUser();
	int getCom();
	void initUser();
	void randomCom();
	int result();
};