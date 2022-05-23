#pragma once
#include <iostream>

template<typename T>
class matrix
{
private:
	int size;
	T** data;

	void allocate();

	void deallocate();

public:
	matrix(int size = 0);


	matrix(const matrix<T>& m);

	~matrix();

	matrix<T>& operator=(const matrix<T>& m);

	matrix<T> operator+(const matrix<T>& m);

	matrix<T> operator-(const matrix<T>& m);

	template<typename U>
	friend std::ostream& operator<<(std::ostream& os, const matrix<U>& m);

	template<typename U>
	friend std::istream& operator>>(std::istream& is, matrix<U>& m);
};

template<typename T>
void matrix<T>::allocate()
{
	if (size == 0)
		return;
	data = new T * [size];
	for (int i = 0; i < size; ++i)
	{
		data[i] = new T[size];
	}
}

template<typename T>
void matrix<T>::deallocate()
{
	if (size == 0 || data == nullptr)
		return;
	for (int i = 0; i < size; ++i)
	{
		delete[] data[i];
	}
	delete[] data;
}

template<typename T>
matrix<T>::matrix(int size)
{
	if (size < 0)
	{
		throw std::invalid_argument("Size must be positive"); // throw("Dimensiunea nu poate fi neg");
	}
	this->size = size;
	allocate();
}

template<typename T>
matrix<T>::matrix(const matrix<T>& m)
{
	size = m.size;
	if (size < 0)
	{
		throw std::invalid_argument("Size must be positive");
	}
	allocate();
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			data[i][j] = m.data[i][j];
		}
	}
}

template<typename T>
matrix<T>::~matrix()
{
	deallocate();
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const matrix<T>& m)
{
	for (int i = 0; i < m.size; ++i)
	{
		for (int j = 0; j < m.size; ++j)
		{
			os << m.data[i][j] << " ";
		}
		os << std::endl;
	}
	return os;
}

template<typename T>
std::istream& operator>>(std::istream& is, matrix<T>& m)
{
	m.deallocate();
	//std::cout << "Dimensiunea = ";
	is >> m.size;
	if (m.size < 0)  std::cout << "Ati introdus o dimensiune < 0", exit(1);
	m.allocate();
	for (int i = 0; i < m.size; ++i)
	{
		for (int j = 0; j < m.size; ++j)
		{
			is >> m.data[i][j];
		}
	}
	return is;
}

template<typename T>
matrix<T> matrix<T>::operator+(const matrix<T>& m)
{
	if (this->size == m.size)
	{
		matrix<T> result(this->size);
		for (int i = 0; i < this->size; ++i)
		{
			for (int j = 0; j < this->size; ++j)
			{
				result.data[i][j] = this->data[i][j] + m.data[i][j];
			}
		}
		return result;
	}
	else
	{
		throw std::invalid_argument("Matricile nu au aceeasi dimensiune");
	}
}

template<typename T>
matrix<T> &matrix<T>::operator=(const matrix<T> &m)
{
	if(size != m.size)
	{
		this->deallocate();
		this->size = m.size;
		this->allocate();
	}
	for (int i = 0; i < this->size; ++i)
	{
		for (int j = 0; j < this->size; ++j)
		{
			this->data[i][j] = m.data[i][j];
		}
	}
	return *this;
}

