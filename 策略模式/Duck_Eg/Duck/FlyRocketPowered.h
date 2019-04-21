#pragma once
#include "FlyBehavior.h"
class FlyRocketPowered :
	public FlyBehavior
{
public:
	FlyRocketPowered();
	~FlyRocketPowered();
	void fly() {
		cout << "ÎÒ´î»ð¼ý·É×ßÀ²¹þ¹þ¹þ¹þ" << endl;
	}
};

