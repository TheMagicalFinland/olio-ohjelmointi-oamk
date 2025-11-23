#include "Animal.h"
#include <iostream>

void Animal::callOut() const
{
	std::cout << "Elain aantelee." << std::endl;
}

Animal::~Animal() = default;
