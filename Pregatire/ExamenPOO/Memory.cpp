#include "Memory.h"

Memory::Memory()
{
}

Memory::Memory(std::string brand, std::string model, double price, int id, double frequency, double capacity, bool matchedPair) :
	baseInfo(brand, model, price, id)
{
	this->frequency = frequency;
	this->capacity = capacity;
	this->matchedPair = matchedPair;
}

void Memory::printDetails()
{
	baseInfo::printDetails();
	std::cout << "Frequency = " << frequency << "GHz\n";
	std::cout << "Capacity = " << capacity << "GB\n";
	std::cout << (matchedPair == true ? "It has matched pair\n" : "It doesn't have matched pair\n");
}
