#pragma once
#include <iostream>
#include "employed.h"
class prof : public employed
{
private:
	std::string faculty;
public:
	prof(std::string fName = {}, std::string lName = {}, std::string CNP = {}, std::string jobTitle = {}, double salary = {}, std::string faculty = {});
	void setFaculty(std::string faculty);
	std::string getFaculty();
	void print();
};