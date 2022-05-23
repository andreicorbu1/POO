#pragma once
#include <iostream>
class personalInformation
{
protected:
	std::string fName, lName, CNP;
public:
	personalInformation(std::string fName = {}, std::string lName = {}, std::string CNP = {});
	virtual ~personalInformation();
	void setFName(std::string fName);
	void setLName(std::string lName);
	void setCNP(std::string CNP);
	std::string getCNP();
	std::string getFName();
	std::string getLName();
	virtual void print();
};