#pragma once
#include <string>
class Car
{
private:
	int yearModel;
	std::string brand;
	std::string model;
public:
	Car(int yrModel, std::string brnd, std::string mdl);
	void printData();
};

