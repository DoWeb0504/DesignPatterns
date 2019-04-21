#include "MullardDuck.h"
#include "Quack.h"
#include "FlyWithWings.h"
#include "ModeDuck.h"
#include "FlyRocketPowered.h"

int main() {
	Duck *mullard = new MullardDuck();
	mullard->display();
	mullard->setQuackBehavior(new Quack);
	mullard->setFlyBehavior(new FlyWithWings);
	mullard->performFly();
	mullard->performQuack();
	cout << endl;

	Duck *modelDuck = new ModeDuck();  //建一个模型鸭。模型鸭默认会呱呱叫不会飞
	modelDuck->performFly();
	modelDuck->setFlyBehavior(new FlyRocketPowered);//让模型鸭可以搭火箭飞
	modelDuck->performFly();



	cout << "hello" << endl;
	system("pause");
	return 0;
}