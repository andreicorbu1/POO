#include "Guitar.h"

Guitar::Guitar(std::string nume, std::string brand, bool isAcoustic) : Instrument(nume, brand), Portable()
{
	this->isAcoustic = isAcoustic;
}

void Guitar::play()
{
	std::cout << "You have to pluck the " << nume;
}

void Guitar::printDetails()
{
	if (isPacked == true) std::cout << "Este impachetat\n";
	else std::cout << "Nu este impachetat\n";
}
