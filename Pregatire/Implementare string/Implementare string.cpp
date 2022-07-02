//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//
//class myString
//{
//private:
//	char* buffer;
//	size_t size;
//	void _clear()
//	{
//		if (buffer != nullptr)
//			delete[] buffer;
//		size = 0;
//		buffer = nullptr;
//	}
//public:
//	myString(char* buffer = nullptr, size_t size = 0)
//	{
//		if (size != 0 && buffer != nullptr)
//		{
//			size = strlen(buffer);
//			this->buffer = new char[size + 1];
//			strncpy(this->buffer, buffer, size);
//			this->buffer[size] = '\0';
//		}
//		else
//		{
//			this->buffer = buffer;
//			this->size = size;
//		}
//	}
//
//	myString(const myString& other)
//	{
//		if (other.buffer != nullptr)
//		{
//			this->buffer = new char[other.size + 1];
//			strcpy(this->buffer, other.buffer);
//			this->buffer[other.size + 1] = '\0';
//			this->size = other.size;
//		}
//		else
//		{
//			this->buffer = nullptr;
//			this->size = 0;
//		}
//	}
//
//	myString& operator=(const myString& other)
//	{
//		if (this != &other)
//		{
//			_clear();
//			buffer = new char[other.size];
//			strcpy(buffer, other.buffer);
//			size = other.size;
//		}
//		return *this;
//	}
//
//	myString& operator=(const char* other)
//	{
//		if (!(this->buffer == other && this->size == strlen(other)))
//		{
//			_clear();
//			size = strlen(other);
//			buffer = new char[size + 1];
//			strcpy(buffer, other);
//			buffer[size] = '\0';
//			return *this;
//		}
//	}
//};
//
//int main()
//{
//	std::cout << "Hello World!\n";
//}
#include <iostream>
#include <string>

int main()
{
	std::string s1 = "Hello World!\n";
	std::cout << s1;
	return 0;
}