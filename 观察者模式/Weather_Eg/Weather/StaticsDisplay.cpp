#include "StaticsDisplay.h"



StaticsDisplay::StaticsDisplay(Subject* weatherData)
{
	this->weatherData = weatherData;
	weatherData->registerObserver(this);
}


StaticsDisplay::~StaticsDisplay()
{
}
