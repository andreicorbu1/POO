#include <iostream>
#include <vector>
#include <algorithm>

//template <typename T>
//T add(T a, T b) {
//  return a + b;
//}
template<typename T>
class Pereche {
private:
	T x, y;
public:
	Pereche(T x = 0, T y = 0) : x(x), y(y) {}

	Pereche operator+(const Pereche &p) const {
		return Pereche(x + p.x, y + p.y);
	}

	Pereche &operator+=(const Pereche &p) {
		x += p.x;
		y += p.y;
		return *this;
	}

	friend std::ostream &operator<<(std::ostream &os, const Pereche &p) {
		os << "(" << p.x << ", " << p.y << ")";
		return os;
	}
};

template<class T, class U>
auto add(T a, U b) {
	return a + b;
}

template<typename T>
T addVec(std::vector<T> a) {
	T sum = {};
	for (T i: a) {
		sum += i;
	}
	return sum;
}

int main() {
	int a = 10, b = 5;
	std::cout << add(a, b) << std::endl;
	std::cout << add(3.5, 4.2) << std::endl;
	std::cout << add(5, 16) << std::endl;
	std::cout << add(5.5f, 16.2f) << std::endl;
	std::cout << add(21, 12.3f) << std::endl;
	std::vector<int> ab = {42, 32, 12, 31, 42, 15, 22};
	std::vector<double> abd = {42.5, 32.2, 12.3, 31.4, 42.5, 15.6, 22.7};
	std::vector<long long> abll = {42, 32, 12, 31, 42, 15, 22};
	std::vector<float> abf = {42.5, 32.2, 12.3, 31.4, 42.5, 15.6, 22.7};
	std::vector<std::string> abc = {"42", "32", "12", "31", "42", "15", "22"};
	std::cout << addVec(ab) << std::endl << addVec(abd) << "\n" << addVec(abll) << "\n" << addVec(abf) << std::endl
	          << addVec(abc) << "\n";
	Pereche<float> p1(1.42, 2.12), p2(3.1, 4.298);
	Pereche<float> d = add(p1, p2);
	std::vector<Pereche<float>> vp = {p1, p2, d};
	std::cout << addVec(vp) << std::endl;
}
