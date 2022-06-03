#pragma once
#include "baseInfo.h"
class Procesor :
    public baseInfo
{
private:
    double frequency;
public:
    Procesor();
    Procesor(std::string brand, std::string model, double price, int id, double frequency);
    void printDetails();
};

