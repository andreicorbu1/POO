#pragma once
#include "baseInfo.h"
class SSD :
    public baseInfo
{
private:
    double capacity, size;
    std::string interfata;
public:
    SSD();
    SSD(std::string brand, std::string model, double price, int id, double capacity, double size, std::string interfata);
    void printDetails();
};

