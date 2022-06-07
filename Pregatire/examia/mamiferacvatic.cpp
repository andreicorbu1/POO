#include "mamiferacvatic.h"

mamiferacvatic::mamiferacvatic()
{
}

mamiferacvatic::mamiferacvatic(char nume[100], char mediudeviata[100], char sunetspecific[10]) : mamifer(nume, mediudeviata)
{
	strcpy(this->mediudeviata, "acvatic");
	strcpy(this->sunetspecific, sunetspecific);
}

char* mamiferacvatic::getmediudeviata()
{
	return mediudeviata;
}

char* mamiferacvatic::getsunet()
{
	return sunetspecific;
}
