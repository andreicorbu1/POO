#pragma once
#include "Instrument.h"
#include "Portable.h"
class Violin :
    public Instrument, public Portable
{
public:
    Violin(std::string nume = "", std::string brand = "");
    void play();
    void printDetails();
};

