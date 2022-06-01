//
// Created by Andrei on 31-May-22.
//

#include "spider.h"
#include <iostream>
spider::spider()
{
	std::cout << "S-a apelat constructor spider\n";
}

void spider::eat()
{
	animal::eat();
}
