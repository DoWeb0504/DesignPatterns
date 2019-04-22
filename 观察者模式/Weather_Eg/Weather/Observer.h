#pragma once
#include <iostream>
using namespace std;
class Observer
{
public:
	Observer();
	~Observer();
	virtual void update(float temperature, float humidity, float pressure) = 0;
};

