#include "mamiferterestru.h"

mamiferterestru::mamiferterestru(char nume[100], char mediudeviata[100], int nrpicioare = 0) : mamifer(nume, mediudeviata)
{
	strcpy(this->mediudeviata, "terestru");
	this->nrpicioare = nrpicioare;
}

mamiferterestru::mamiferterestru()
{
}

char* mamiferterestru::getmediudeviata()
{
	return mediudeviata;
}

int mamiferterestru::getnrpicioare()
{
	return nrpicioare;
}
