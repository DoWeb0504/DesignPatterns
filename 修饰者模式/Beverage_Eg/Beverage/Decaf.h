#pragma once
#include "Beverage.h"
class Decaf :
	public Beverage
{
public:
	Decaf();
	~Decaf();
	double cost() {
		return 1.05;
	}
};

