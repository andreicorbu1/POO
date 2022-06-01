//
// Created by Andrei on 31-May-22.
//
#include <iostream>
#ifndef LAB13_PET_H
#define LAB13_PET_H


class pet
{
public:
	virtual void play() = 0;
	virtual std::string getName() = 0;
	virtual void setName(const std::string& nume) = 0;
};


#endif //LAB13_PET_H
