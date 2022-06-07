#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
class mamifer
{
protected:
	char nume[100];
	char mediudeviata[100];
public:
	mamifer();
	mamifer(char nume[100], char mediudeviata[100]);
	char* getNume();
	virtual char* getmediudeviata() = 0;
	void print();
};

