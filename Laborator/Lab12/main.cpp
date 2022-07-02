#include <iostream>
#include "matrix.h"

int main()
{
	try
	{
		matrix<int> m(3), m2(4), m3;
		std::cin >> m;
		std::cout << m;
		std::cin >> m2;
		std::cout << m2;
		std::cout << m + m2;
	}
	catch (std::exception& e) // cactch(const char* err_msg) std::cout << err_msg << "\n";
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}
