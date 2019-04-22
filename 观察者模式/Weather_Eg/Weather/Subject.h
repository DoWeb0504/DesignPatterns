#pragma once
#include "Observer.h"
#include <iostream>
using namespace std;
class Subject
{
public:
	Subject();
	~Subject();

	virtual void registerObserver(Observer* o) = 0;
	virtual void removeObserver(Observer* o) = 0;
	virtual void notifyObserver() = 0;
};

