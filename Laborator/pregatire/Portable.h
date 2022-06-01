#pragma once
class Portable
{
protected:
	bool isPacked;
public:
	Portable(bool isPacked = false);
	void pack();
	void unpack();
};

