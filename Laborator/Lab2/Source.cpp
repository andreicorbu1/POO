#include <iostream>

class NrComplex
{
private:
	double pReala, pImag;
public:
	//NrComplex(double pReala, double pImag)
	//{
	//	this->pReala = pReala;
	//	this->pImag = pImag;
	//}
	// 
	//NrComplex() = default;
	// 
	//NrComplex(double pReala)
	//{
	//	this->pReala = pReala;
	//	this->pImag = 0;
	//}
	// 
	//constructor cu parametrii impliciti
	NrComplex(double pReala = 0, double pImag = 0)
	{
		this->pReala = pReala;
		this->pImag = pImag;
		//this->print();
	}

	void setPReala(double pReala)
	{
		this->pReala = pReala;
	}

	void setPImag(double pImag)
	{
		this->pImag = pImag;
	}

	double getPReala()
	{
		return pReala;
	}

	double getPImag()
	{
		return pImag;
	}

	void print()
	{
		std::cout << this->pReala << " + " << this -> pImag << " * i\n";
	}
	//operator aritmetic -
	NrComplex operator - (NrComplex &b)
	{
		NrComplex w;
		w.pReala = pReala - b.pReala;
		w.pImag = pImag - b.pImag;
		return w;
	}
	//operator <<

	bool operator ==(const NrComplex& b)
	{
		return((pReala == b.pReala) && (pImag == b.pImag));
	}

	friend std::ostream& operator << (std::ostream& os, const NrComplex& c)
	{
		os << c.pReala << " + " << c.pImag << " * i\n";
		return os;
	}
};

//supraincarc operatorul aritmetic +
NrComplex operator +(NrComplex& z, NrComplex& w)
{
	//NrComplex c(z.getPReala() + w.getPReala(), z.getPImag() + w.getPImag());
	NrComplex t;
	t.setPReala(z.getPReala() + w.getPReala());
	t.setPImag(z.getPImag() + w.getPImag());
	return t;
	//return c;
}

int main()
{
	NrComplex z(1, 2), w(6, 4), y, k(z);
	z.print();
	w.print();
	y = z + w;
	y.print();
	std::cout << y;
	std::cout << w - z;
	std::cout << ((k == z) ? "DA" : "NU");
	return 0;
}
