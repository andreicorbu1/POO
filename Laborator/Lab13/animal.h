//
// Created by Andrei on 31-May-22.
//

#ifndef LAB13_ANIMAL_H
#define LAB13_ANIMAL_H


class animal
{
protected:
	int legs;
public:
	animal();
	virtual void walk();
	virtual void eat();
};


#endif //LAB13_ANIMAL_H
