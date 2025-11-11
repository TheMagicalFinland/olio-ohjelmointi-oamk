#include <iostream>
#include <vector>
#include "Car.h"

int main()
{
    std::vector<Car> cars = { Car(2013, "Audi", "A4 Avant 2.0 TDI"),
        Car(2020, "Toyota", "Avensis"),
        Car(2016, "Audi", "A5") };

    std::cout << "Toinen alkio:" << std::endl;
    cars[1].printData();
    
    std::cout << "------------" << std::endl;

    for (int i = 0; i < cars.size(); i++) {
        std::cout << "Alkion " + std::to_string((i + 1)) + " tiedot" << std::endl;
        cars[i].printData();
        std::cout << "------------" << std::endl;
    }

    return 0;
}