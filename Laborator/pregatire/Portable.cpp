#include "Portable.h"

Portable::Portable(bool isPacked)
{
	this->isPacked = isPacked;
}

void Portable::pack()
{
	if (isPacked == true) return;
	else isPacked = true;
}

void Portable::unpack()
{
	if (isPacked == true) isPacked = false;
}
