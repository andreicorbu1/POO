#include "Piano.h"
//Instrument nu trebuie pus in header
Piano::Piano(std::string nume, std::string brand) : Instrument(nume, brand)
{
	isTuned = false;
}

void Piano::tunePiano()
{
	if (isTuned == false) isTuned = true;
}

std::string Piano::getNume()
{
	return nume;
}

void Piano::play()
{
	std::cout << "You have to press " << this->nume << " keyboard\n";
}

void Piano::printDetails()
{
	if (isTuned == false) std::cout << "Nu e tunat\n";
	else std::cout << "Este tunat\n";
}
