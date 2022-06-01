#include "Instrument.h"
Instrument::Instrument(std::string nume, std::string brand)
{
	this->nume = nume;
	this->brand = brand;
}

void Instrument::printDetails()
{
	std::cout << nume << " " << brand;
}
