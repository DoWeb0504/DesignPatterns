#pragma once
#include "QuackBehavior.h"
class Quack :
	public QuackBehavior
{
public:
	Quack();
	~Quack();

	void quack() {
		cout << "ÎÒÔÚßÉßÉ½Ð" << endl;
	}
};

