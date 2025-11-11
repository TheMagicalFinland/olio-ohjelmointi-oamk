
#include "Car.h"
#include <iostream>

void Car::setBrand(std::string brnd) {
	brand = brnd;
}

void Car::setModel(std::string mdl) {
	model = mdl;
}

void Car::setYearModel(int modelYear) {
	yearModel = modelYear;
}

void Car::printData()
{
	std::cout << "Year model: " + std::to_string(yearModel) << std::endl;
	std::cout << "Model: " + model << std::endl;
	std::cout << "Brand: " + brand << std::endl;
}
