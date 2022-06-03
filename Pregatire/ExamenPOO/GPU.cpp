#include "GPU.h"

GPU::GPU()
{
}

GPU::GPU(std::string brand, std::string model, double price, int id, double frequency, double memorySize, bool supportsCuda)
	: baseInfo(brand, model, price, id)
{
	this->frequency = frequency;
	this->memorySize = memorySize;
	this->supportsCuda = supportsCuda;
}

void GPU::printDetails()
{
	baseInfo::printDetails();
	std::cout << "Frequency = " << frequency << "GHz\n";
	std::cout << "Memory Size = " << memorySize << "GB\n";
	std::cout << (supportsCuda == true ? "It supports CUDA\n" : "It doesn't support CUDA\n");
}
