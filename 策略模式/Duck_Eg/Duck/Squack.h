#pragma once
#include "QuackBehavior.h"
class Squack :
	public QuackBehavior
{
public:
	Squack();
	~Squack();
	void quack() {
		cout << "����֨֨��" << endl;
	}
};

