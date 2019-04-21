#pragma once
#include "FlyBehavior.h"
class FlyWithWings :
	public FlyBehavior
{
public:
	FlyWithWings();
	~FlyWithWings();

	void fly() {
		cout << "ÎÒÓÃ³á°ò·ÉÁËÑ½" << endl;
	}
};

