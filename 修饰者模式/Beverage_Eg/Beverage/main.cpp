#include "DarkRoast.h"
#include "Espesso.h"
#include "Mocha.h"
#include "Whip.h"
#include "Soy.h"
#include "HouseBlend.h"

int main() {
	Beverage* beverage = new Espesso();
	cout << beverage->getDescription() << ": $" << beverage->cost() << endl;

	Beverage* beverage2 = new DarkRoast();
	beverage2 = new Mocha(beverage2);
	beverage2 = new Mocha(beverage2);
	beverage2 = new Whip(beverage2);
	cout << beverage2->getDescription() << ": $" << beverage2->cost() << endl;

	Beverage* beverage3 = new HouseBlend();
	beverage3 = new Soy(beverage3);
	beverage3 = new Mocha(beverage3);
	beverage3 = new Whip(beverage3);
	cout << beverage3->getDescription() << ": $" << beverage3->cost() << endl;

	delete(beverage);
	delete(beverage2);
	delete(beverage3);
	system("pause");
	return 0;
}