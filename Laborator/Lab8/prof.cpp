#include "prof.h"
#include <iostream>

prof::prof(std::string fName, std::string lName, std::string CNP, std::string jobTitle, double salary, std::string faculty) : employed(fName, lName, CNP, jobTitle, salary)
{
	this->faculty = faculty;
}

void prof::setFaculty(std::string faculty)
{
	this->faculty = faculty;
}

std::string prof::getFaculty()
{
	return faculty;
}

void prof::print()
{
	std::cout << "Nume: " << lName << "\nPrenume: " << fName << "\nCNP: " << CNP << "\nFunctie: " << jobTitle << "\nSalariu: " << salary << "\nDepartament: " << faculty << "\n";
}
