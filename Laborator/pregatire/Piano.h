#pragma once
#include "Instrument.h"
#include "Portable.h"
class Piano :
	public Instrument
{
protected:
	bool isTuned;
public:
	Piano(std::string nume = {}, std::string brand = {});
	void tunePiano();
	std::string getNume();
	void play();
	void printDetails();
};

