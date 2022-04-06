#include "concurs.h"


bool Concurs::comparator_scor(participant p1, participant p2)
{
	return p1.getScore() >= p2.getScore();
}

bool Concurs::comparator_nume(participant p1, participant p2)
{
	return p1.getFirstName() >= p2.getFirstName();
}

Concurs::Concurs(std::string edition, std::string place)
{
	this->edition = edition;
	this->place = place;
}

std::vector<participant> Concurs::getParticipants()
{
	return participants;
}

void Concurs::scoreSort()
{
	std::sort(participants.begin(), participants.end(), comparator_scor);
}

void Concurs::nameSort()
{
	std::sort(participants.begin(), participants.end(), comparator_nume);
}

void Concurs::addParticipant(std::string first_name, std::string last_name)
{
	participant candidate(first_name, last_name);
	candidate.generatePoints();
	participants.push_back(candidate);
}

void Concurs::deleteParticipant(std::string first_name, std::string last_name)
{
	for (std::vector<participant>::iterator it = participants.begin(); it < participants.end(); )
	{
		if ((it->getFirstName() == first_name) && (it->getLastName() == last_name))
		{
			it = participants.erase(it);
		}
		else
		{
			++it;
		}
	}
}

void Concurs::modParticipant(participant partic, std::string first_name, std::string last_name)
{
	partic.setFirstName(first_name);
	partic.setLastName(last_name);
}
