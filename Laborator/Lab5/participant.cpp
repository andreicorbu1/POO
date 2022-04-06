#include "participant.h"

participant::participant(std::string first_name, std::string last_name)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->score = 0;
	points.resize(10, 0);
}

std::vector<unsigned int> participant::getPoints()
{
	return points;
}

std::string participant::getFirstName()
{
	return first_name;
}

std::string participant::getLastName()
{
	return last_name;
}

double participant::getScore()
{
	return score;
}

void participant::calcScore()
{
	score = 0;
	for (int i = 0; i < 10; ++i)
	{
		score += points[i];
	}
	score /= 10;
}

void participant::generatePoints()
{
	for (int i = 0; i < 10; ++i)
	{
		points[i] = rand() % 11;
	}
	calcScore();
}

void participant::setLastName(std::string last_name)
{
	this->last_name = last_name;
}

void participant::setFirstName(std::string first_name)
{
	this->first_name = first_name;
}

void participant::setScore(double score)
{
	this->score = score;
}
void participant::setPoints(std::vector<unsigned int>points)
{
	for (int i = 0; i < 10; ++i)
	{
		this->points[i] = points[i];
	}
	calcScore();
}
void participant::print()
{
	std::cout << last_name << " " << first_name << " " << score;
	std::cout << "\n";
}
