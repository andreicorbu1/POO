#pragma once
#include <iostream>
#include <vector>
class participant
{
private:
	std::string first_name, last_name;
	double score;
	std::vector<unsigned int> points;
	void calcScore();
	void setScore(double score);
public:
	participant(std::string first_name = "-", std::string last_name = "-");
	std::vector<unsigned int> getPoints();
	std::string getFirstName();
	std::string getLastName();
	double getScore();
	void generatePoints();
	void setLastName(std::string last_name);
	void setFirstName(std::string first_name);
	void setPoints(std::vector<unsigned int>points);
	void print();
};