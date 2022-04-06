#include <iostream>
#include <vector>
#include <string>
#include <fstream>

void readData(std::vector<int>& number1, std::vector<int>& number2)
{
	std::string number_1, number_2;
	std::ifstream fin("input.txt");
	fin >> number_1;
	fin >> number_2;
	int N = number_1.length();
	number1.resize(N + 1);
	for (int i = N - 1; i >= 0; --i)
	{
		number1[N - i] = (int)(number_1[i] - '0');
	}
	number1[0] = N;
	N = number_2.length();
	number2.resize(N + 1);
	for (int i = N - 1; i >= 0; --i)
	{
		number2[N - i] = (int)(number_2[i] - '0');
	}
	number2[0] = N;
}

void addition(std::vector<int> number1, std::vector<int> number2, std::vector<int>& number3)
{
	if (number1[0] < number2[0])
	{
		number1.resize(number2[0] + 1);
		for (int i = number1[0] + 1; i <= number2[0]; ++i)
		{
			number1[i] = 0;
		}
		number1[0] = number2[0];
	}
	else
	{
		number2.resize(number1[0] + 1);
		for (int i = number2[0] + 1; i <= number2[0]; ++i)
		{
			number2[i] = 0;
		}
		number2[0] = number1[0];
	}
	int max = number1[0], t = 0, digit;
	number3.resize(max + 1);
	for (int i = 1; i <= max; ++i)
	{
		t = number1[i] + number2[i] + t;
		number3[i] = t % 10;
		t /= 10;
	}
	if (t)
	{
		number3.push_back(t);
	}
	number3[0] = number3.size();
}

void printData(std::vector<int> number)
{
	for (int i = number[0] - 1; i >= 1; --i)
	{
		std::cout << number[i];
	}
}

int main()
{
	std::vector<int> number1, number2, number3;
	readData(number1, number2);
	addition(number1, number2, number3);
	printData(number3);
	return 0;
}