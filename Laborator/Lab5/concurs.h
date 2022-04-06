#pragma once
#include "participant.h"
#include <algorithm>
class Concurs
{
private:
	std::vector<participant> participants;
	std::string edition, place;
	bool comparator_scor(participant p1, participant p2);
	bool comparator_nume(participant p1, participant p2);
public:
	Concurs(std::string edition = "1", std::string place = "Aula Universitatii Transilvania");
	std::vector<participant> getParticipants();
	void scoreSort();
	void nameSort();
	void addParticipant(std::string first_name, std::string last_name);
	void deleteParticipant(std::string first_name, std::string last_name);
	void modParticipant(participant partic, std::string first_name, std::string last_name);
};