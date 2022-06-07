#pragma once
#include "mamifer.h"
class mamiferacvatic :
    virtual public mamifer
{
protected:
    char sunetspecific[10];
public:
    mamiferacvatic();
    mamiferacvatic(char nume[100], char mediudeviata[100], char sunetspecific[10]);
    char* getmediudeviata();
    char* getsunet();
};

