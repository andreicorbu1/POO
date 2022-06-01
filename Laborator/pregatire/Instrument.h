#pragma once
#include <iostream>
class Instrument
{
public:
	std::string nume, brand;
	Instrument(std::string nume = {}, std::string brand = {});
	virtual void play() = 0;
	void printDetails();
};

