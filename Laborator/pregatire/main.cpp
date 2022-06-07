#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

int main()
{
	char sir[250];
	std::cin.get(sir, 250);
	std::cin.get();
	char x[20];
	std::cin.get(x, 20);
	char *p = strtok(sir, ";");
	while (p)
	{
		if (p[0] == ' ')
		{
			strcpy(p, p + 1);
		}
		if(strstr((sir + strlen(sir) - strlen(x)), x))
		{
			std::cout << sir+strlen(sir)-strlen(x);
		}
		//std::cout << p << "\n";
		p = strtok(NULL, ";");
	}
	return 0;
}
