#pragma once
#include "mamiferacvatic.h"
#include "mamiferterestru.h"
class foca :
    virtual public mamiferacvatic, public mamiferterestru
{
public:
    foca(char nume[100], char mediudeviata[100], char sunetspecific[100], int nrpicioare);
    char* getmediudeviata();
};

