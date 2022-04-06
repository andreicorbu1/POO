#include <iostream>
class myVector
{
private:
	int _size;
	double* elements = nullptr;
public:
	myVector(int _size = 0, double valoare = 0)
	{
		this->_size = _size;
		if(_size > 0)
		{
			elements = new double[this->_size];
			for (int i = 0; i < _size; ++i)
			{
				elements[i] = valoare;
			}
		}
		else
		{
			elements = nullptr;
		}
	}

	myVector(const myVector& v)
	{
		this->_size = v._size;
		if (this->_size > 0)
		{
			this->elements = new double[_size];
			for (int i = 0; i < v._size; ++i)
			{
				this->elements[i] = v.elements[i];
			}
		}
		else
			this->elements = nullptr;
	}

	~myVector()
	{
		if (elements != nullptr)
		{
			delete[] elements;
		}
	}

	void print()
	{
		if (elements != nullptr)
		{
			for (int i = 0; i < _size; ++i)
			{
				std::cout << elements[i] << " ";
			}
			std::cout << "\n";
		}
	}

	void clear()
	{
		_size = 0;
		if (elements != nullptr)
		{
			delete[] elements;
			elements = nullptr;
		}
	}

	int size()
	{
		return _size;
	}

	bool empty()
	{
		return _size == 0 && elements == nullptr;
	}

	double at(int index)
	{
		if (elements != nullptr && (index >= 0 && index < _size))
			return elements[index];
	}

	//supraincarcarea operatorului [](de indexare/acces la element)
	double& operator[](int index)
	{
		if(this->elements != nullptr && (index >= 0 && index < this->_size))
			return this->elements[index];
	}

	friend std::ostream& operator <<(std::ostream& os, myVector &v)
	{
		if (v._size > 0)
		{
			for (int i = 0; i < v._size; ++i)
			{
				os << v[i] << " ";
			}
			os << std::endl;
		}
		return os;
	}
};

int main()
{
	myVector a(6, 4), b(a);
	b.print();
	a.clear();
	std::cout << (a.empty() ? "\nVectorul a este gol\n" : "\nVectorul a nu este gol\n");
	b.print();
	b[1] = 5;
	std::cout << b;
	//a.print();
	//std::cout << a.at(3);
	//std::cout << (a.empty() ? "\nVectorul este gol" : "\nVectorul nu este gol");
	//a.clear();
	//std::cout << (a.empty() ? "\nVectorul este gol" : "\nVectorul nu este gol");
	//std::cout << "\n" << a.size();
	return 0;
}