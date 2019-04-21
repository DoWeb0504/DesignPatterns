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

	Duck *modelDuck = new ModeDuck();  //��һ��ģ��Ѽ��ģ��ѼĬ�ϻ����ɽв����
	modelDuck->performFly();
	modelDuck->setFlyBehavior(new FlyRocketPowered);//��ģ��Ѽ���Դ�����
	modelDuck->performFly();



	cout << "hello" << endl;
	system("pause");
	return 0;
}