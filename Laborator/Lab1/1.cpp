/*
Sa se scrie o structura care sa modeleze un punct in plan(x,y)
-> sa se permita modificarea coordonatelor punctului prin intermediul unor metode
-> sa se determine distanta de la punct la originea axelor
-> sa se scrie o metoda care sa permita afisarea coordonatelor punctului 
-> sa se scrie o metoda care sa permita translatarea punctului cu delta x si delta y specificate
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
 
template<typename A, typename B> ostream& operator<<(ostream& os, const pair<A, B>& p) { return os << '(' << p.first << ", " << p.second << ')'; }
template < typename T_container, typename T = typename enable_if < !is_same<T_container, string>::value, typename T_container::value_type >::type > ostream & operator<<(ostream& os, const T_container& v) { os << '{'; string sep; for (const T& x : v) os << sep << x, sep = ", "; return os << '}'; }
 
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
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
        cout << "(" << x << ", " << y <<")\n";
    }

    void translation(double deltaX, double deltaY)
    {
        x += deltaX;
        y += deltaY;
    }
};

int main()
{
    Punct P;
    P.setX(7);
    P.setY(8);
    P.print();
    cout << P.getDistanceOrigin() << endl;
    P.translation(5.32, 9.41);
    P.print();
    return 0;
}