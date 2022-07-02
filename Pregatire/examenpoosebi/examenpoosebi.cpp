#include <iostream>

class complex
{
	double real, imag;
public:
	complex(double real = 0, double imag = 0)
	{
		this->real = real;
		this->imag = imag;
	}
	complex operator+(const complex& c)
	{
		complex res(real + c.real, imag + c.imag);
		return res;
	}
	complex operator=(const complex& other)
	{
		real = other.real;
		imag = other.imag;
		return *this;
	}
	friend std::ostream& operator<<(std::ostream& os, const complex& c)
	{
		os << c.real << " + " << c.imag << "i";
		return os;
	}
};

int main()
{
	complex a(4, 5), b(9, 8), c;
	std::cout << a + b << "\n";
	c = a + b;
	std::cout << a << "\n" << b << "\n" << c;
}