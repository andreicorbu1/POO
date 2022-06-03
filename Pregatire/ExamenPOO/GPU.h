#pragma once
#include "baseInfo.h"
class GPU :
    public baseInfo
{
private:
	double frequency, memorySize;
	bool supportsCuda;
public:
	GPU();
	GPU(std::string brand, std::string model, double price, int id, double frequency, double memorySize, bool supportsCuda);
	void printDetails();
};

