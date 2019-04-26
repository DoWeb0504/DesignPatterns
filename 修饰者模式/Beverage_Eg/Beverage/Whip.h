#pragma once
#include "CondimentDecoration.h"
class Whip :
	public CondimentDecoration
{
public:
	Whip(Beverage* beverage);
	~Whip();
	Beverage* beverage;
	string getDescription() {
		return beverage->getDescription() + ", Whip";
	}
	double cost() {
		return beverage->cost() + 0.10;
	}
};

