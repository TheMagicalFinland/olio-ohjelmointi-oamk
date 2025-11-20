#pragma once
#include <string>
#include "Chef.h"

class ItalianChef : public Chef
{
public:
	~ItalianChef();
	ItalianChef(std::string);
	std::string getName();
	void makePasta();
};

