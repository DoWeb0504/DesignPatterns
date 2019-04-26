#pragma once
#include "CondimentDecoration.h"
class Milk :
	public CondimentDecoration
{
public:
	Milk(Beverage* beverage);
	~Milk();
	Beverage* beverage;
	string getDecription() {
		return beverage->getDescription() + ", Milk";
	}
	double cost() {
		return beverage->cost() + 0.10;
	}
};

