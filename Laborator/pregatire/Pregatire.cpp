#include <iostream>
#include "Guitar.h"
#include "Piano.h"
#include <vector>
#include "Instrument.h"
#include "Violin.h"

void preparingForConcert(std::vector<Instrument*> vec)
{
	for (auto it : vec)
	{
		if (dynamic_cast<Guitar*>(it) != nullptr)
		{
			dynamic_cast<Guitar*>(it)->unpack();
			dynamic_cast<Guitar*>(it)->play();
		}
		else if (dynamic_cast<Violin*>(it) != nullptr) {
			dynamic_cast<Violin*>(it)->unpack();
			dynamic_cast<Violin*>(it)->play();
		}
		else {
			dynamic_cast<Piano*>(it)->tunePiano();
			dynamic_cast<Piano*>(it)->play();
		}
	}
}

int main()
{
	Guitar chitara("Chitara1", "Acustic", true);
	Violin vioara;
	Piano pian("Pian", "Adevarat");
	pian.printDetails();
	vioara.printDetails();
	chitara.printDetails();
	Instrument* ex;
	ex = &chitara;
	ex->printDetails();
	std::cout << "\n";
	std::vector<Instrument*> vec;
	vec.push_back(&pian);
	vec.push_back(&chitara);
	vec.push_back(&vioara);
	for (auto it : vec)
	{
		it->printDetails();
		std::cout << "\n";
	}
	preparingForConcert(vec);
	return 0;
}