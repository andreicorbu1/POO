//
// Created by Andrei on 31-May-22.
//
#include "animal.h"
#include "pet.h"
#ifndef LAB13_FISH_H
#define LAB13_FISH_H


class fish : public animal, public pet
{
private:
	std::string m_name;
public:
	fish();
	void eat();
	void play();
	std::string getName();
	void setName(const std::string &nume);
};


#endif //LAB13_FISH_H
