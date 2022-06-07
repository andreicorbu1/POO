#include "foca.h"

foca::foca(char nume[100], char mediudeviata[100], char sunetspecific[100], int nrpicioare) : mamiferacvatic(nume, mediudeviata, sunetspecific), mamiferterestru(nume, mediudeviata, nrpicioare)
{
	strcpy(this->nume, nume);
	char med[100];
	strcpy(med, this->mediudeviata);
	strcat(med, "+");
	strcat(med, "acvatic");
	strcpy(this->mediudeviata, med);
}

char* foca::getmediudeviata()
{
	return mediudeviata;
}
