//#include <iostream>
//#include "animal.h"
//#include "pet.h"
//#include "spider.h"
//#include "cat.h"
//#include "fish.h"
//
//class test
//{x`
//public:
//	void playWithAnimal(animal *a)
//	{
//		pet *dp = dynamic_cast<pet *>(a);
//		if (dp == nullptr) std::cout << "Slaba boaba marcel";
//		else
//		{
//			std::cout << "Merge marcele";
//			dp->play();
//		}
//	}
//};
//
//int main()
//{
//	cat muie("Ioana");
//	test marcel;
//	marcel.playWithAnimal(&muie);
//}

#include <iostream>

template<typename T, typename U, typename W>
auto maxim(T nr1, U nr2, W nr3)
{
	double maxi = DBL_MIN;
	maxi = (nr1 > nr2 ? nr1 : nr2);
	maxi = (nr3 > maxi ? nr3 : maxi);
	return maxi;
}

int main()
{
	std::cout << (20%(20/9) == 0);
}