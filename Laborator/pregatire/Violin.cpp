#include "Violin.h"

Violin::Violin(std::string nume, std::string brand) : Instrument(nume, brand), Portable()
{
}

void Violin::play()
{
	std::cout << "You have to press the " << nume << " strings and move the bow.\n";
}

void Violin::printDetails()
{
	if (isPacked == true) std::cout << "Este impachetat\n";
	else std::cout << "Nu este impachetat\n";
}
