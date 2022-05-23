#pragma once
#include <iostream>
#include "employed.h"
class persAux : public employed
{
private:
	std::string depart;
public:
	persAux(std::string fName, std::string lName, std::string CNP, std::string jobTitle, double salary, std::string depart);
	~persAux();
	void setDepart(std::string depart);
	std::string getDepart();
	void print();
};