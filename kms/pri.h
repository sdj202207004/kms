#pragma once
#include "api.h"

class pri
{
private:
	int user;
	int com;
	int result;
public:
	pri(api);
	~pri();

	void printUser();
	void printCom();
	void printResult();
};

