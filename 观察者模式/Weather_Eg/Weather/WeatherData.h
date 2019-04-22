#pragma once
#include "Subject.h"
#include <list>
class WeatherData :      //WeatherData���ⴰ��
	public Subject
{
public:
	WeatherData();
	~WeatherData();
	void registerObserver(Observer* o) { //��ӹ۲���
		observers.push_back(o);
	}
	void removeObserver(Observer* o) {//�Ƴ��۲���
		observers.remove(o);
	}
	void notifyObserver() {  //����֪ͨ
		list<Observer*>::iterator it = observers.begin();
		for (int i = 0; i < observers.size(); i++) {
			advance(it, i);
			Observer* observer = (Observer*)*it;
			observer->update(temperature, humidity, pressure);
		}
	}
	void measurementsChanged() {
		notifyObserver();
	}
	void setMeasurements(float temperature, float humidity, float pressure) {
		this->temperature = temperature;
		this->humidity = humidity;
		this->pressure = pressure;
		measurementsChanged();
	}

private:
	list<Observer*> observers;  //ʹ��˫�������������洢�۲���
	float temperature;
	float humidity;
	float pressure;
};

