#include "Car.h"
#include <iostream>

Car::Car(int yrModel, std::string brnd, std::string mdl)
{
	yearModel = yrModel;
	brand = brnd;
	model = mdl;
}

void Car::printData()
{
	std::cout << "Vuosimalli: " + std::to_string(yearModel) << std::endl;
	std::cout << "Valmistaja: " + brand << std::endl;
	std::cout << "Auton malli: " + model << std::endl;
}
