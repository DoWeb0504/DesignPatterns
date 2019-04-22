#include <iostream>
#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
#include "StaticsDisplay.h"
using namespace std;
int main() {
	WeatherData* weather = new WeatherData();  //气象局

	CurrentConditionsDisplay* currentDisplay = new CurrentConditionsDisplay(weather);//显示屏
	StaticsDisplay* staticsDisplay = new StaticsDisplay(weather);

	weather->setMeasurements(80, 65, 30.4f);
	weather->setMeasurements(82,70, 29.2f);

	weather->removeObserver(currentDisplay);
	weather->setMeasurements(78, 80, 32.2f);
	
	cout << "hello" << endl;
	system("pause");
	return 0;
}