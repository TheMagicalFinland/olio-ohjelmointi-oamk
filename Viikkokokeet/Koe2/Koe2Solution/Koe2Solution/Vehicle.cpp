#include "Vehicle.h"

void Vehicle::setSpeed(int vehSpeed)
{
    speed = vehSpeed;
}

void Vehicle::setName(std::string vehName)
{
    name = vehName;
}

int Vehicle::getSpeed()
{
    return speed;
}

std::string Vehicle::getName()
{
    return name;
}