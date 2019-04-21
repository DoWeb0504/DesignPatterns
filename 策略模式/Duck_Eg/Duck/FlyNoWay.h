#pragma once
#include "FlyBehavior.h"
class FlyNoWay :
	public FlyBehavior
{
public:
	FlyNoWay();
	~FlyNoWay();
	void fly() {
		cout << "ÎÒ²»»á·É£¡£¡" << endl;
	}
};

