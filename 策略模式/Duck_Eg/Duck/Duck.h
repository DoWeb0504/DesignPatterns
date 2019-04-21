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
		cout << "我在游泳" << endl;
	}
	virtual void display() = 0;
	void performQuack() {
		quackBehavior->quack();
	}
	void performFly() {
		flyBehavior->fly();
	}
	void setFlyBehavior(FlyBehavior* fb) {  //委托管理飞翔行为
		flyBehavior = fb;
	}
	void setQuackBehavior(QuackBehavior* qb) {  //委托管理叫声行为
		quackBehavior = qb;
	}

	
};

