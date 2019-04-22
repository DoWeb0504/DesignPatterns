#pragma once
#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"
class StaticsDisplay:
	public Observer, public DisplayElement
{
public:
	StaticsDisplay(Subject* weatherData);
	~StaticsDisplay();

	void update(float temperature, float humidity, float pressure) {
		this->temperature = temperature;
		this->humidity = humidity;
		display();
	}
	void display() {
		cout << "Statistics: " << temperature << "F degress and" << humidity << "% humity" << endl;
	}

private:
	float temperature;
	float humidity;
	Subject* weatherData;
};

