#pragma once
#include "Beverage.h"
class DarkRoast :
	public Beverage
{
public:
	DarkRoast();
	~DarkRoast();

	double cost() {
		return 0.99;
	}
};

