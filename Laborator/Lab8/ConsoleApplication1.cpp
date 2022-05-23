#include <iostream>
#include "personalInformation.h"
#include "student.h"
#include "employed.h"
#include "prof.h"
//#include "studentAng.h"
#include "persAux.h"
#include <vector>
int main()
{
	personalInformation p("Andrei", "Ana", "5020723152486");
	student s("Ioana", "Maria", "21392392", "FMI", "Info");
	prof profs("Marian", "Alexandru", "1253232", "Asistent Universitar", 1000.5, "FMI");
	persAux aux("Ioana", "Andreea", "2393201", "Secretar", 100.32, "Secretariat");
	p.print();
	std::cout << "\n";
	s.print();
	std::cout << "\n";
	aux.print();
	student* ps = new student("Ioana", "Maria", "21392392", "FMI", "Info");
	personalInformation *pp = new personalInformation("Andrei", "Ana", "5020723152486");
	std::cout << "\n";
	std::vector<personalInformation*> test;
	std::vector<prof*> profi;
	std::vector<student*> studenti;
	test.push_back(ps);
	test.push_back(pp);
	test.push_back(&aux);
	test.push_back(&s);
	test.push_back(&profs);
	for (int i = 0; i < test.size(); ++i)
	{
		/*test[i]->print();
		std::cout << "\n";*/
		student* ps = dynamic_cast<student*>(test[i]);
		if (ps)
		{
			studenti.push_back(ps);
		}
		else
		{
			prof* pa = dynamic_cast<prof*>(test[i]);
			if (pa)
			{
				profi.push_back(pa);
			}
		}
	}
	std::cout << "\n";
	for (auto s : studenti)
	{
		s->print();
	}
	return 0;
}
