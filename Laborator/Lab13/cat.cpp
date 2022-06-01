//
// Created by Andrei on 31-May-22.
//

#include "cat.h"
#include <iostream>
cat::cat()
{
	std::cout << "S-a apelat constructor cat";
}

cat::cat(const std::string &name)
{
	std::cout << "S-a apelat constructor cat";
	this->m_name = name;
}

std::string cat::getName()
{
	return this->m_name;
}

void cat::setName(const std::string &nume)
{
	this->m_name = nume;
}

void cat::eat()
{
	animal::eat();
}

void cat::play()
{
	std::cout << "Ma joc cu pisica marcele\n";
}
