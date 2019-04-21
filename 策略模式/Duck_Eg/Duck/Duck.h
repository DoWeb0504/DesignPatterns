#pragma once
#include "QuackBehavior.h"
#include "FlyBehavior.h"

class Duck {
public:
	Duck();
	~Duck();
	QuackBehavior* quackBehavior;
	FlyBehavior* flyBehavior;
	void swim() {
		cout << "������Ӿ" << endl;
	}
	virtual void display() = 0;
	void performQuack() {
		quackBehavior->quack();
	}
	void performFly() {
		flyBehavior->fly();
	}
	void setFlyBehavior(FlyBehavior* fb) {  //ί�й��������Ϊ
		flyBehavior = fb;
	}
	void setQuackBehavior(QuackBehavior* qb) {  //ί�й��������Ϊ
		quackBehavior = qb;
	}

	
};

