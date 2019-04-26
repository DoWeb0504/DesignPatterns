#pragma once
#include "CondimentDecoration.h"
class Soy :
	public CondimentDecoration
{
public:
	Soy(Beverage* beverage);
	~Soy();
	Beverage* beverage;
	string getDescription() {
		return beverage->getDescription() + ", Soy";
	}
	double cost() {
		return beverage->cost() + 0.15;
	}
};

