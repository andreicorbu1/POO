#include <iostream>

class myVector
{
private:
	int _size, _capacity;
	double* elements = nullptr;

	inline void reallocate(int newCapacity)
	{
		if (newCapacity < _capacity)
		{
			return;
		}
		else
		{
			double* tarr = new double[newCapacity];
			memcpy(tarr, elements, _size * sizeof(double));
			delete[] elements;
			elements = tarr;
			_capacity = newCapacity;
		}
	}
public:
	myVector(int _size = 0, double valoare = 0)
	{
		this->_size = _size;
		_capacity = 2 * _size;
		if (_size > 0)
		{
			elements = new double[_capacity];
			for (int i = 0; i < _size; ++i)
			{
				elements[i] = valoare;
			}
		}
		else
		{
			elements = new double[10];
			_capacity = 10;
		}
	}

	myVector(const myVector& v)
	{
		this->_size = v._size;
		if (this->_size > 0)
		{
			this->_capacity = v._capacity;
			this->elements = new double[_capacity];
			for (int i = 0; i < v._size; ++i)
			{
				this->elements[i] = v.elements[i];
			}
		}
		else
		{
			this->elements = new double[10];
			this->_capacity = 10;
		}
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
			elements = new double[10];
		}
		_capacity = 10;
	}

	int size() const noexcept
	{
		return _size;
	}

	int capacity() const noexcept
	{
		return _capacity;
	}

	bool empty()
	{
		return _size == 0;
	}

	double at(int index)
	{
		if (elements != nullptr && (index >= 0 && index < _size))
			return elements[index];
	}

	void push_back(double valoare)
	{
		if (_size >= _capacity)
		{
			reallocate(2 * _capacity);
		}
		elements[_size] = valoare;
		_size++;
	}

	void resize(int newSize, int defElem = 0)
	{
		if (newSize < _capacity)
		{
			if (newSize > _size)
			{
				for (int i = _size; i < newSize; ++i)
				{
					elements[i] = defElem;
				}
			}
			else
			{
				double* tarr = new double[newSize * 2];
				for (int i = 0; i < newSize; ++i)
				{
					tarr[i] = elements[i];
				}
				delete[] elements;
				elements = tarr;
				_capacity = newSize * 2;
				_size = newSize;
			}
		}
		else
		{
			reallocate(newSize * 2);
			for (int i = _size; i < newSize; ++i)
			{
				elements[i] = defElem;
			}
		}
		_size = newSize;
	}

	void pop_back()
	{
		if (_size > 0)
		{
			--_size;
		}
	}

	void insert(int pos, double val)
	{
		push_back(0);
		for (int i = _size - 1; i > pos; --i)
		{
			elements[i] = elements[i - 1];
		}
		elements[pos] = val;
	}

	/*
	TODO: Incercare implementare clasa string
	*/

	//supraincarcarea operatorului [](de indexare/acces la element)
	double& operator[](int index)
	{
		if (this->elements != nullptr && (index >= 0 && index < this->_size))
			return this->elements[index];
	}

	//supraincarcarea operatorului de atribuire(=)
	myVector& operator =(myVector& w) noexcept
	{
		/*int i;
		if (_capacity < w._capacity)
		{
			_capacity = w._capacity << 2;
			double* tarr = new double[_capacity];
			memcpy(tarr, elements, _size * sizeof(double));
			delete[] elements;
			elements = tarr;
		}
		for (i = 0; i < w._size; ++i)
		{
			elements[i] = std::move(w.elements[i]);
		}
		_size = w._size;*/
		if (elements != nullptr)
		{
			delete[] elements;
		}
		_size = w._size;
		_capacity = w._capacity;
	/*	if (w.elements)
		{*/
		elements = new double[_capacity];
		for (int i = 0; i < w._size; ++i)
		{
			elements[i] = w[i];
		}
			/*
		}
		else
		{
			elements = new double[_capacity];
		}*/
		return *this;
	}

	friend std::ostream& operator <<(std::ostream& os, myVector& v)
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
	b.insert(1, 69);
	b.print();
	return 0;
}