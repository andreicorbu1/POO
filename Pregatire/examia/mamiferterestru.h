#pragma once
#include "mamifer.h"
class mamiferterestru :
    virtual public mamifer
{
protected:
    int nrpicioare;
public:
    mamiferterestru(char nume[100], char mediudeviata[100], int nrpicioare);
    mamiferterestru();
    char* getmediudeviata();
    int getnrpicioare();
};

