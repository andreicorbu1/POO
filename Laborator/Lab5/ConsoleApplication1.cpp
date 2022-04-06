/*
La un concurs, comitetul de evaluare inregistreaza scorul obtinut de fiecare participant. Despre fiecare participant se inregistreaza urmatoarele informatii:
-nume
-prenume
-scor-suma punctajelor celor 10 probleme pe care le are de rezolvat fiecare
Creati o aplicatie care sa permita comitetului de organizare sa adauge participanti, sa actualizeze un participant existent, sa stearga participanti, sa permita afisarea participantilor filtrati dupa o proprietate(de ex: scor/nume), permite sortarea participantilor dupa nume/scor/crescator/decrescator.
*/
#include "participant.h"
#include "concurs.h"
//#include <iostream>
//#include <algorithm>
//#include <vector>

int main()
{
    srand(time(NULL));
    participant test("Adrian", "Ionescu");
    test.generatePoints();
    test.setFirstName("Marian");
    test.print();
    std::vector<unsigned int> puncte = { 1,4,5,2,3,10,10,10,10,10 };
    test.setPoints(puncte);
    std::cout << "\n";
    test.print();
    Concurs a;
    a.modParticipant("Ioana", "Maria");
    return 0;
}