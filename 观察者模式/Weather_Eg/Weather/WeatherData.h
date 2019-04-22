#pragma once
#include "Subject.h"
#include <list>
class WeatherData :      //WeatherData主题窗口
	public Subject
{
public:
	WeatherData();
	~WeatherData();
	void registerObserver(Observer* o) { //添加观察者
		observers.push_back(o);
	}
	void removeObserver(Observer* o) {//移除观察者
		observers.remove(o);
	}
	void notifyObserver() {  //发布通知
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
	list<Observer*> observers;  //使用双向链表（容器）存储观察者
	float temperature;
	float humidity;
	float pressure;
};

