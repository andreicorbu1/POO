#include "baseInfo.h"

baseInfo::baseInfo(std::string brand, std::string model, double price, int id) :
	brand(brand), model(model), price(price), id(id) {}

void baseInfo::printDetails()
{
	std::cout << "Brand = " << brand << "\n";
	std::cout << "Model = " << model << "\n";
	std::cout << "Price = " << price << "\n";
	std::cout << "ID = " << id << "\n";
}
