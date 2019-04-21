#include "ModeDuck.h"
#include "FlyNoWay.h"
#include "Quack.h"



ModeDuck::ModeDuck()
{
	flyBehavior = new FlyNoWay();
	quackBehavior = new Quack();
}


ModeDuck::~ModeDuck()
{
}
