#include <iostream>
#include "Time.h"
#include <vector>
#include "GPU.h"
#include "Procesor.h"
#include "SSD.h"
#include "Memory.h"

template<typename T>
int Count(T vec[], T x, size_t size)
{
	int N = sizeof(vec) / sizeof(vec[0]);
	std::cout << N << "\n";
	int ans = 0;
	for (size_t i = 0; i < size; ++i)
	{
		if (vec[i] == x)
		{
			++ans;
		}
	}
	return ans;
}

//template<typename T>
//int Count(const T* vecc, T x, size_t size)
//{
//	int ans = 0;
//	for (size_t i = 0; i < size; ++i)
//	{
//		if (vecc[i] == x)
//		{
//			++ans;
//		}
//	}
//	return ans;
//}

int main()
{
	try
	{
		Time obj(12, 8, 9), obj2(21, 54, 34);
		std::cout << obj.constructTime() << "\n";
		Time obj3 = obj + obj2;
		std::cout << obj3.constructTime() << "\n";
		Procesor test("Intel", "i7", 3490, 7, 4.52);
		GPU test5("Nvidia", "GTX 1040", 3490, 1, 4.52, 2, true);
		GPU test6("Nvidia", "GTX 1060", 3490, 1, 4.52, 2, true);
		GPU test7("Nvidia", "GTX 1050", 3490, 1, 4.52, 2, true);
		GPU test2("Nvidia", "RTX 3060", 3490, 1, 4.52, 2, true);
		GPU test8("AMD", "RX 580", 3490, 1, 4.52, 2, true);
		Memory test3("Kingston", "HyperX", 3490, 1, 4.52, 1.6, false);
		SSD test4("Samsung", "SSD", 3490, 1, 4.52, 1.6, "NVMe");
		std::vector<baseInfo*> vec;
		vec.push_back(&test);
		vec.push_back(&test2);
		vec.push_back(&test3);
		vec.push_back(&test4);
		vec.push_back(&test5);
		vec.push_back(&test6);
		vec.push_back(&test7);
		vec.push_back(&test8);
		int count = 0;
		for (auto it : vec)
		{
			if (dynamic_cast<GPU*>(it) != nullptr)
			{
				count++;
			}
			it->printDetails();
			std::cout << "\n";
		}
		vec.clear();
		std::cout << "\n" << count << "\n";
		int numere[6] = { 10, 20, 10, 45, 66, 24 };
		int x;
		std::cout << "Dati valoare lui x : ";
		std::cin >> x;
		int ans = Count(numere, x, 6);
		if (ans == 0)
		{
			std::cout << "Elementul " << x << " nu se afla in vector\n";
		}
		else
		{
			std::cout << "Elementul " << x << " se afla de " << ans << " ori in vector\n";
		}
		const char* nume[6] = { "Ana", "Vlad", "Diana", "Dan", "Paul" , "Dan" };
		const char* key = "Dan";
		int ans2 = Count(nume, key, 6);
		if (ans2 != 0)
		{
			std::cout << "Am regasit numele " << key << " in sirul de nume de " << ans2 << " ori\n";
		}
		else std::cout << "Nu am gasit numele" << key << "\n";
		return 0;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what();
		return -1;
	}
	/*
	Nu avem nevoie de destructori pentru ca nu alocam dinamic memorie care ar trebui sa fie dealocata,
	deci destructorii pe care compilatorul ii creaza implicit sunt suficienti pentru aceasta problema
	*/
	
}
