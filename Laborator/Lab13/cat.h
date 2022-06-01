//
// Created by Andrei on 31-May-22.
//

#include "pet.h"
#include "animal.h"

#ifndef LAB13_CAT_H
#define LAB13_CAT_H


class cat : public animal, public pet
{
private:
	std::string m_name;
public:
	cat();
	cat(const std::string &name);
	void eat();
	void play();
	std::string getName();
	void setName(const std::string &nume);
};


#endif //LAB13_CAT_H
