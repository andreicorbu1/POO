#include "Time.h"

Time::Time(int hours, int minutes, int seconds)
{
	if (hours > 24 && hours < 0 || minutes > 60 && minutes < 0 || seconds > 60 && seconds < 0)
	{
		std::cerr << "Invalid time" << std::endl;
		exit(-1);
	}
	else
	{
		this->hours = hours;
		this->minutes = minutes;
		this->seconds = seconds;
	}
}

std::string Time::constructTime()
{

	std::string sHours, sMinutes, sSeconds;
	if (hours < 10)
	{
		sHours = "0" + std::to_string(hours);
	}
	else
	{
		sHours = std::to_string(hours);
	}
	if (minutes < 10)
	{
		sMinutes = "0" + std::to_string(minutes);
	}
	else
	{
		sMinutes = std::to_string(minutes);
	}
	if (seconds < 10)
	{
		sSeconds = "0" + std::to_string(seconds);
	}
	else
	{
		sSeconds = std::to_string(seconds);
	}
	std::string time = sHours + ":" + sMinutes + ":" + sSeconds;
	return time;
}

Time Time::operator+(const Time& obj2)
{
	int aMinutes, aHours, aSeconds;
	aHours = (hours + obj2.hours) % 24;
	if (minutes + obj2.minutes >= 60)
	{
		aHours++;
		if (aHours >= 24) aHours = aHours % 24;
		aMinutes = (minutes + obj2.minutes) % 60;
	}
	else
	{
		aMinutes = (minutes + obj2.minutes) % 60;
	}
	if (seconds + obj2.seconds >= 60)
	{
		aMinutes++;
		if (aMinutes >= 60)
		{
			aMinutes = aMinutes % 60;
			aHours++;
			if (aHours >= 24) aHours = aHours % 24;
		}
		aSeconds = (seconds + obj2.seconds) % 60;
	}
	else
	{
		aSeconds = (seconds + obj2.seconds) % 60;
	}
	Time ans(aHours, aMinutes, aSeconds);
	return ans;
}


