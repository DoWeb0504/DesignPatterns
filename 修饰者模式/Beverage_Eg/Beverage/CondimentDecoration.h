#pragma once
#include "Beverage.h"
#include <string>
class CondimentDecoration :
	public Beverage
{
public:
	CondimentDecoration();
	~CondimentDecoration();
	virtual string getDescription() = 0;  //���Ǻ����ɴ��麯��
};

