#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

class Nr_Nat_Mare
{
	char* nr;
	
	Nr_Nat_Mare gcd(Nr_Nat_Mare other)
	{
		Nr_Nat_Mare copie(*this);
		while(copie != other)
		{
			if(copie > other)
				copie = copie - other;
			else
				other = other - copie;
		}
		return copie;
	}
public:
	Nr_Nat_Mare() 
	{
		this->nr = nullptr;
	}
	Nr_Nat_Mare(const char* nr)
	{
		this->nr = new char[strlen(nr) + 1];
		if (this->nr == nullptr) throw "Eroare la alocarea memoriei";
		strcpy(this->nr, nr);
	}

	Nr_Nat_Mare(const Nr_Nat_Mare& nr)
	{
		this->nr = new char[strlen(nr.nr) + 1];
		if (this->nr == nullptr) throw "Eroare la alocarea memoriei";
		strcpy(this->nr, nr.nr);
	}

	~Nr_Nat_Mare()
	{
		if (nr != nullptr)
			delete[] nr;
	}

	char* getNr()
	{
		return nr;
	}
	
	bool operator!=(const Nr_Nat_Mare& other)
	{
		if (strlen(nr) != strlen(other.nr))
			return true;
		else
		{
			if (strcmp(nr, other.nr) == 0)
				return false;
			else return true;
		}
	}

	bool operator>(const Nr_Nat_Mare& other)
	{
		for (int i = 0; i < strlen(nr); ++i)
			if (nr[i] <= other.nr[i])
				return false;
		return true;
	}
	
	Nr_Nat_Mare operator^(const Nr_Nat_Mare& numar)
	{
		return gcd(numar);
	}
	
	Nr_Nat_Mare& operator=(const Nr_Nat_Mare& numar)
	{
		if (this->nr != nullptr)
		{
			delete[] this->nr;
		}
		this->nr = new char[strlen(numar.nr) + 1];
		if (this->nr == nullptr) throw "Eroare la alocarea memoriei";
		strcpy(this->nr, numar.nr);
		return *this;
	}

	Nr_Nat_Mare operator-(const Nr_Nat_Mare& other)
	{
		if (strlen(nr) != strlen(other.nr))
		{
			throw "Numerele au numar diferit de cifre!\n";
		}
		int carry = 0;
		int i = 0;
		char* newNr = new char[strlen(nr) + 1];
		if (newNr == nullptr) throw "Eroare la alocarea memoriei";
		for (i = 0; i < strlen(nr); ++i)
		{
			if (nr[i] >= other.nr[i])
			{
				
			}
		}
		
	}

	friend std::ostream& operator<<(std::ostream& os, const Nr_Nat_Mare& nr)
	{
		char* nrr = new char[strlen(nr.nr) + 1];
		strcpy(nrr, nr.nr);
		nrr = _strrev(nrr);
		os << nrr;
		return os;
	}

	friend std::istream& operator>>(std::istream& is, Nr_Nat_Mare& numar)
	{
		if (numar.nr != nullptr)
		{
			delete[] numar.nr;
		}
		char* copie = new char[100];
		is >> copie;
		for (int i = 0; i < strlen(copie); ++i)
		{
			if (!isdigit(copie[i]))
				throw "Eroare la citirea numarului!";
		}
		numar.nr = new char[strlen(copie) + 1];
		strcpy(numar.nr, copie);
		delete[] copie;
		numar.nr = _strrev(numar.nr);
		return is;
	}

};

int main()
{
	try
	{
		Nr_Nat_Mare* array;
		array = new Nr_Nat_Mare[3];
		if(array == nullptr) throw "Eroare la alocarea memoriei";
		for (int i = 0; i < 3; ++i)
		{
			std::cin >> array[i];
		}
		array[0] = array[2];
		std::cout << array[0];
		/*Nr_Nat_Mare rez = array[0] ^ array[1];
		for (int i = 2; i < 10; ++i)
		{
			rez = rez ^ array[i];
			if (rez.getNr() == "1")
			{
				std::cout << 1;
				return 0;
			}	
		}
		std::cout << rez;*/
	}
	catch (const char* msg)
	{
		std::cout << msg << std::endl;
	}
}