#include "persAux.h"
#include "employed.h"
#include <iostream>
persAux::persAux(std::string fName, std::string lName, std::string CNP, std::string jobTitle, double salary, std::string depart) : employed(fName, lName, CNP, jobTitle, salary)
{
	this->depart = depart;
}

persAux::~persAux()
{
	std::cout << "S-a apelat destructorul clasei persAux\n";
}

void persAux::setDepart(std::string depart)
{
	this->depart = depart;
}

std::string persAux::getDepart()
{
	return depart;
}

void persAux::print()
{
	std::cout << "Nume: " << lName << "\nPrenume: " << fName << "\nCNP: " << CNP << "\nFunctie: " << jobTitle << "\nSalariu: " << salary << "\nDepartament: " << depart << "\n";
}
