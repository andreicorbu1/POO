#include "Procesor.h"

Procesor::Procesor()
{
}

Procesor::Procesor(std::string brand, std::string model, double price, int id, double frequency) :
	baseInfo(brand, model, price, id)
{
	this->frequency = frequency;
}

void Procesor::printDetails()
{
	baseInfo::printDetails();
	std::cout << "Frequency = " << frequency << "GHz\n";
}
