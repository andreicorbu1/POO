#include "employed.h"
#include <iostream>
employed::employed(std::string fName, std::string lName, std::string CNP, std::string jobTitle, double salary) : personalInformation(fName, lName, CNP)
{
	this->jobTitle = jobTitle;
	this->salary = salary;
}

employed::~employed()
{
	std::cout << "S-a apelat destructorul clasei employed\n";
}

void employed::setJobTitle(std::string jobTitle)
{
	this->jobTitle = jobTitle;
}

void employed::setSalary(double salary)
{
	this->salary = salary;
}

std::string employed::getJobTitle()
{
	return jobTitle;
}

double employed::getSalary()
{
	return salary;
}

void employed::print()
{
	std::cout << "Nume: " << lName << "\nPrenume: " << fName << "\nCNP: " << CNP << "\nFunctie: " << jobTitle << "\nSalariu: " << salary << "\n";
}
