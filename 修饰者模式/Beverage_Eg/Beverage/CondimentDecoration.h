#pragma once
#include "Beverage.h"
#include <string>
class CondimentDecoration :
	public Beverage
{
public:
	CondimentDecoration();
	~CondimentDecoration();
	virtual string getDescription() = 0;  //¸²¸Çº¯Êý³É´¿Ðéº¯Êý
};

