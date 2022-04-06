/*
Sa se scrie o clasa/structura care sa permita lucrul cu obiecte de tip Cerc
*/
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template <typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v)
{
    os << '{';
    string sep;
    for (const T &x : v)
        os << sep << x, sep = ", ";
    return os << '}';
}

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#ifdef NEAL_DEBUG
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

class Punct
{
private:
    double x, y;
    //metode:
public:
    double getDistanceOrigin()
    {
        return sqrt(x * x + y * y);
    }

    void setX(double X)
    {
        this->x = X;
    }

    void setY(double Y)
    {
        this->y = Y; // this-> pointer catre obiectul curent
    }

    void print()
    {
        cout << "(" << x << ", " << y << ")\n";
    }

    void translation(double deltaX, double deltaY)
    {
        x += deltaX;
        y += deltaY;
    }
};

class Cerc
{
private:
    double raza;
    Punct centru;

public:
    void setRaza(double Raza)
    {
        this->raza = Raza;
    }
    void setCentru(double X, double Y)
    {
        this->centru.setX(X);
        this->centru.setY(Y);
    }
    double getArea()
    {
        return 3.14 * raza * raza;
    }
    double getLength()
    {
        return 3.14 * 2 * raza;
    }
    double getRaza()
    {
        return raza;
    }
    void print()
    {
        cout << "Raza este: " << raza << "; Centrul este in ";
        centru.print();
    }
};

int main()
{
    Cerc C;
    C.setRaza(5);
    C.setCentru(0, 0);
    cout << "Aria este: " << C.getArea() << endl;
    cout << "Lungimea este: " << C.getLength() << endl;
    C.print();
    return 0;
}