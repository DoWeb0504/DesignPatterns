#pragma once
#include "Beverage.h"
class Espesso :
	public Beverage
{
public:
	Espesso();
	~Espesso();

	double cost() {
		return 1.99;
	}
};

