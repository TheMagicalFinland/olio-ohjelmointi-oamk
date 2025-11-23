#include "Animal.h"

#pragma once
class Dog : public Animal
{
public:
	void callOut() const override;
	virtual ~Dog();
};