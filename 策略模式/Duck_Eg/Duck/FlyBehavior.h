#pragma once
#include <iostream>
using namespace std;
class FlyBehavior
{
public:
	FlyBehavior();
	~FlyBehavior();
	virtual void fly() = 0;
	void readme() {
		cout << "�ҹ������" << endl;
	}
};

