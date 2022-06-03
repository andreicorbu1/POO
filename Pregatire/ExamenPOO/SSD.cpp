#include "SSD.h"

SSD::SSD()
{
}

SSD::SSD(std::string brand, std::string model, double price, int id, double capacity, double size, std::string interfata)
	: baseInfo(brand, model, price, id)
{
	this->capacity = capacity;
	this->size = size;
	this->interfata = interfata;
}

void SSD::printDetails()
{
	baseInfo::printDetails();
	std::cout << "Capacity: " << capacity << " GB" << std::endl;
	std::cout << "Size: " << size << " GB" << std::endl;
	std::cout << "Interface: " << interfata << std::endl;
}
