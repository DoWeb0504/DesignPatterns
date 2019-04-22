#include "CurrentConditionsDisplay.h"



CurrentConditionsDisplay::CurrentConditionsDisplay(Subject* weatherData)
{
	this->weatherData = weatherData;
	weatherData->registerObserver(this);
}


CurrentConditionsDisplay::~CurrentConditionsDisplay()
{
}
