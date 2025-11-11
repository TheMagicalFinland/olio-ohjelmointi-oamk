#pragma once
#include <string>
class Vehicle
{
public:
	void setSpeed(int);
	void setName(std::string);

	int getSpeed();
	std::string getName();
private:
	int speed;
	std::string name;
};

