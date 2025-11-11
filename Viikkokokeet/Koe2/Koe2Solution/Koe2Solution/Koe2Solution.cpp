
#include <iostream>
#include "Apartment.h"
#include "Vehicle.h"

int main()
{
    // Kysymys 3
    Apartment ap(2, 60);
    int apCost = ap.heatingCost();
    std::cout << "Heating cost = " << apCost << std::endl;

    // Kysymys 4
    Vehicle v;
    v.setName("Ford");
    v.setSpeed(85);
    std::cout << v.getName() + " , ";
    std::cout << v.getSpeed();
    std::cout << " km/h" << std::endl;
}