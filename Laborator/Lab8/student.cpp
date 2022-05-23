#include "student.h"
#include <iostream>

student::student(std::string fName, std::string lName, std::string CNP, std::string facultate, std::string specializare) : personalInformation(fName, lName, CNP)
{
	this->facultate = facultate;
	this->specializare = specializare;
}

student::~student()
{
	std::cout << "S-a apelat destructorul clasei student\n";
}

void student::setSpecializare(std::string specializare)
{
	this->specializare = specializare;
}

void student::setFacultate(std::string facultate)
{
	this->facultate = facultate;
}

std::string student::getFacultate()
{
	return facultate;
}

std::string student::getSpecializare()
{
	return specializare;
}

void student::print()
{
	std::cout << "Nume: " << lName << "\nPrenume: " << fName << "\nCNP: " << CNP << "\nFacultate: " << facultate << "\nSpecializare: " << specializare << "\n";
}
