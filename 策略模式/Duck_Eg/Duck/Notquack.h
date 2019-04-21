#pragma once
#include "QuackBehavior.h"
class Notquack :
	public QuackBehavior
{
public:
	Notquack();
	~Notquack();
	void quack() {
		cout << "ÎÒ²»»á½Ð°¡" << endl;
	}
};

