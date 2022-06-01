//
// Created by Andrei on 31-May-22.
//

#include "animal.h"
#include "pet.h"

#ifndef LAB13_SPIDER_H
#define LAB13_SPIDER_H


class spider : public animal, public pet
{
public:
	spider();
	void eat();
};


#endif //LAB13_SPIDER_H
