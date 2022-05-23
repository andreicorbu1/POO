#include "personalInformation.h"
#include <iostream>
personalInformation::personalInformation(std::string fName, std::string lName, std::string CNP)
{
	this->fName = fName;
	this->lName = lName;
	this->CNP = CNP;
}

personalInformation::~personalInformation()
{
	std::cout << "S-a apelat destructorul clasei personalInformation\n";
}

void personalInformation::setFName(std::string fName)
{
	this->fName = fName;
}

void personalInformation::setLName(std::string lName)
{
	this->lName = lName;
}

void personalInformation::setCNP(std::string CNP)
{
	this->CNP = CNP;
}

std::string personalInformation::getCNP()
{
	return CNP;
}

std::string personalInformation::getFName()
{
	return fName;
}

std::string personalInformation::getLName()
{
	return lName;
}

void personalInformation::print()
{
	std::cout << "Nume = " << lName << "\nPrenume = " << fName << "\nCNP = " << CNP << "\n";
}
