#include "ItalianChef.h"

ItalianChef::~ItalianChef()
{
	std::cout << "Italian Chef " + name + " destruktori" << std::endl;
}

ItalianChef::ItalianChef(std::string name) : Chef(name) {
	std::cout << "ItalianChef " + name + " konstruktori" << std::endl;
}

std::string ItalianChef::getName()
{
	return name;
}

void ItalianChef::makePasta()
{
	std::cout << "Italian Chef " + name + " makes pasta" << std::endl;
}
