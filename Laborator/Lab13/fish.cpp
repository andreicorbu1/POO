//
// Created by Andrei on 31-May-22.
//

#include "fish.h"
#include <iostream>

fish::fish()
{
	std::cout << "S-a apelat constructor fish\n";
}

std::string fish::getName()
{
	return this->m_name;
}

void fish::setName(const std::string &nume)
{
	this->m_name = nume;
}

void fish::eat()
{
	animal::eat();
}

void fish::play()
{
	std::cout << "Ma joc cu pisica marcele\n";
}
