#pragma once
#include <iostream>
#include <string>
class Time
{
private:
	int hours, minutes, seconds;
public:
	Time(int hours = 0, int minutes = 0, int seconds = 0);
	std::string constructTime();
	Time operator+(const Time& obj2);
};

