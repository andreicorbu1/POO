#pragma once
#include "Instrument.h"
#include "Portable.h"
class Guitar :
    public Instrument, public Portable
{
public:
    bool isAcoustic;
    Guitar(std::string nume = "", std::string brand = "", bool isAcoustic = {});
    void play();
    void printDetails();
};

