#pragma once
#include "CondimentDecoration.h"
class Mocha :
	public CondimentDecoration
{
public:
	Mocha(Beverage *beverage);
	~Mocha();
	Beverage* beverage;
	string getDescription() {
		return beverage->getDescription() + ", Mocha";
	}
	double cost() {
		return beverage->cost() + 0.20;
	}
};

 