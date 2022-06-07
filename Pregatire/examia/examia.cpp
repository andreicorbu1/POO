#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "mamifer.h"
#include "mamiferacvatic.h"
#include "mamiferterestru.h"
#include "foca.h"

void printcharp(char* p)
{
	for (int i = 0; i < strlen(p); ++i)
	{
		std::cout << p[i];
	}
	std::cout << "\n";
}

int main()
{
	char maria[100] = "Maria";
	char mariana[100] = "Alexandra ";
	char sunet[100] = "hai fa futete";
	foca test(maria, mariana, sunet, 4);
	printcharp(test.getmediudeviata());
	printcharp(test.getNume());
	printcharp(test.getsunet());
	std::cout << test.getnrpicioare();
	test.print();
	mamifer* array[50];
	for (int i = 0; i < 5; ++i)
	{
		array[i] = &test;
	}
	for (int i = 0; i < 5; ++i)
	{
		array[i]->print();
		std::cout << "\n";
		printcharp(dynamic_cast<foca*>(array[i])->getsunet());
	}
}