#pragma once
#include "QuackBehavior.h"
class Quack :
	public QuackBehavior
{
public:
	Quack();
	~Quack();

	void quack() {
		cout << "�������ɽ�" << endl;
	}
};

