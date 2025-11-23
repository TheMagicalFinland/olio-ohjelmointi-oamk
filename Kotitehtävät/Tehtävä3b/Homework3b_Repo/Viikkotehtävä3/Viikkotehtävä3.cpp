#include <iostream>
#include "Dog.h"
#include "Animal.h"

int main()
{
    Dog testDog = Dog();
    Animal testAnimal = Animal();
    testDog.callOut();
    testAnimal.callOut();
    return 0;
}