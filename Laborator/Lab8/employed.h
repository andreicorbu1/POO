#pragma once
#include <iostream>
#include "personalInformation.h"
class employed : public personalInformation
{
protected:
	std::string jobTitle;
	double salary;
public:
	employed(std::string fName = {}, std::string lName = {}, std::string CNP = {}, std::string jobTitle = {}, double salary = {});
	~employed();
	void setJobTitle(std::string jobTitle);
	void setSalary(double salary);
	std::string getJobTitle();
	double getSalary();
	void print();
};