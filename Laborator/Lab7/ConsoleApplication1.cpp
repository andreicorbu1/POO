#include <iostream>

class baseClass
{
public:
	int m_int;
public:
	double m_double;
	baseClass(int _int = 0, double _double = 0.0) : m_int(_int), m_double(_double) {
		std::cout << "baseClass constructor" << std::endl;
	}
	~baseClass() {
		std::cout << "baseClass destructor" << std::endl;
	};
public:
	void print() {
		std::cout << m_int << " " << m_double;
	}
};

class derivedClass : private baseClass
{
private:
	int m_deriv;
public: //                                                              apel explicit al constructorului clasei de baza
	derivedClass(int _int = 0, double _double = 0.0, int _deriv = 10) : baseClass(_int, _double), m_deriv(_deriv) {
		std::cout << "derivedClass constructor" << std::endl;
	}
	derivedClass(baseClass obj, int _deriv = 10) : baseClass(obj), m_deriv(_deriv) {
		std::cout << "derivedClass constructor" << std::endl;
	}
	~derivedClass() {
		std::cout << "derivedClass destructor" << std::endl;
	};
	void print() {/*
		std::cout << m_int << " " << m_double << " " << m_deriv << std::endl;*/
		baseClass::print();
		std::cout << " " << m_deriv << std::endl;
	}
};

int main()
{
	baseClass b;
	//b.print();
	derivedClass d(b, 45);
	d.print();
	return 0;
}