#pragma once
#include "baseInfo.h"
class Memory :
	public baseInfo
{
private:
	double frequency, capacity;
	bool matchedPair;
public:
	Memory();
	Memory(std::string brand, std::string model, double price, int id, double frequency, double capacity, bool matchedPair = false);
	void printDetails();
};

