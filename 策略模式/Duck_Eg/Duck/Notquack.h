#pragma once
#include "QuackBehavior.h"
class Notquack :
	public QuackBehavior
{
public:
	Notquack();
	~Notquack();
	void quack() {
		cout << "�Ҳ���а�" << endl;
	}
};

