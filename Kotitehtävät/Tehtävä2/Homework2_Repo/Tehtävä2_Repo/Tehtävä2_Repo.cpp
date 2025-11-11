#include <iostream>
#include "Car.h"
#include "Rectangle.h"
#include "Student.h"

int main()
{
    // Ensimmäinen osa:

    Car newCar = Car();
    newCar.setBrand("Audi");
    newCar.setModel("A4 Avant 2.0 TDI");
    newCar.setYearModel(2013);
    newCar.printData();

    // Toinen osa:

    Rectangle* rectangle = new Rectangle();
    rectangle->setHeight(100);
    rectangle->setWidth(50);
    
    double area = rectangle->getArea();
    double circum = rectangle->getCircum();

    std::cout << "Area: " + std::to_string(area) << std::endl;
    std::cout << "Circum: " + std::to_string(circum) << std::endl;

    // Poistetaan kekomuisti niin ei tule memory leakkejä.
    delete rectangle;
    rectangle = nullptr;

    // Kolmas osa:

    auto student = std::make_unique<Student>();
    student->setAverage(4.5);
    student->setName("Pasi Pasila");
    student->setStudentNumber(1);

    std::cout << "Kohdehenkilo: " + student->getName() << std::endl;
    std::cout << "Keskiarvo: " + std::to_string(student->getAverage()) << std::endl;
    std::cout << "Oppilasnumero: " + std::to_string(student->getStudentNumber()) << std::endl;
}