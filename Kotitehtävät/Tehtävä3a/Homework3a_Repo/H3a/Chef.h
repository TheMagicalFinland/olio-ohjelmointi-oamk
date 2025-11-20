#pragma once
#include <string>
#include <iostream>
class Chef
{
public:
	~Chef();
	Chef(std::string);
	void makeSalad();
	void makeSoup();
protected:
	std::string name;
};

