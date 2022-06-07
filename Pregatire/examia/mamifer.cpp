#define _CRT_SECURE_NO_WARNINGS
#include "mamifer.h"
mamifer::mamifer()
{
}
mamifer::mamifer(char nume[100], char mediudeviata[100])
{
	strcpy(this->nume, nume);
	strcpy(this->mediudeviata, mediudeviata);
}

char* mamifer::getNume()
{
	return nume;
}

void mamifer::print()
{
	for (int i = 0; i < strlen(nume); ++i)
	{
		std::cout << nume[i];
	}
	std::cout << "\n";
	for (int i = 0; i < strlen(mediudeviata); ++i)
	{
		std::cout << mediudeviata[i];
	}
}
