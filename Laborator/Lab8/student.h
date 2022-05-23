#pragma once
#include <iostream>
#include "personalInformation.h"
class student : public personalInformation
{
private:
	std::string facultate, specializare;
public:
	student(std::string fName = {}, std::string lName = {}, std::string CNP = {}, std::string facultate = {}, std::string specializare = {});
	~student();
	void setFacultate(std::string facultate);
	void setSpecializare(std::string specializare);
	std::string getFacultate();
	std::string getSpecializare();
	void print();
};