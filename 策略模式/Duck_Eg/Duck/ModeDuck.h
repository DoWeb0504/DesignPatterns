#pragma once
#include "Duck.h"
class ModeDuck :
	public Duck
{
public:
	ModeDuck();
	~ModeDuck();
	void display() {
		cout << "我是一只模型鸭" << endl;
	}
};

