#pragma once
#include <string>
class Car
{
private:
	std::string brand;
	std::string model;
	int yearModel;
public:
	void printData();
	void setBrand(std::string);
	void setModel(std::string);
	void setYearModel(int);
};

