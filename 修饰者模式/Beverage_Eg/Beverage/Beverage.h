#pragma once
#include <iostream>
using namespace std;
#include <string>
class Beverage
{
public:
	Beverage();
	~Beverage();
	string description = "Unknown Beverage";

	virtual string getDescription() {
		return description;
	}

	virtual double cost() = 0;

};

