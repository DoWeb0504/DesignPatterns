#pragma once
#include <iostream>
using namespace std;
class QuackBehavior
{
public:
	QuackBehavior();
	~QuackBehavior();
	 virtual void quack() = 0;
	 void readme() {
		 cout << "ÎÒ¹ÜÀí½ÐÉù" << endl;
	 }
};

