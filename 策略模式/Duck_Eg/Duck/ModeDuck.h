#pragma once
#include "Duck.h"
class ModeDuck :
	public Duck
{
public:
	ModeDuck();
	~ModeDuck();
	void display() {
		cout << "����һֻģ��Ѽ" << endl;
	}
};

