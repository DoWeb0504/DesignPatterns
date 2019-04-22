#pragma once
#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"
class CurrentConditionsDisplay :
	public Observer,public DisplayElement
{
public:
	CurrentConditionsDisplay(Subject* weatherData);
	~CurrentConditionsDisplay();

	void update(float temperature, float humidity, float pressure) {
		this->temperature = temperature;
		this->humidity = humidity;
		display();
	}
	void display() {
		cout << "Current conditions: " << temperature << "F degress and" << humidity << "% humity" << endl;
	}

private:
	float temperature;
	float humidity;
	Subject* weatherData;
};

