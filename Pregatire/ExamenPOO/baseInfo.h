#pragma once
#include <iostream>
class baseInfo
{
protected:
	std::string brand, model;
	double price;
	int id;
public:
	baseInfo(std::string brand = "", std::string model = "", double price = 0, int id = 0);
	virtual void printDetails();
};

