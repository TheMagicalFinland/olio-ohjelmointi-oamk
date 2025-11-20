#include "Chef.h"
#include <string>
#include <iostream>

Chef::~Chef()
{
	std::cout << "Chef " + name + " destruktori" << std::endl;
}

Chef::Chef(std::string cookName) {
	name = cookName;
	std::cout << "Chef " + name + " konstruktori" << std::endl;
}

void Chef::makeSoup()
{
	std::cout << "Chef " + name + " makes soup" << std::endl;
}

void Chef::makeSalad() {
	std::cout << "Chef " + name + " makes salad" << std::endl;
}
