#pragma once
class Apartment
{
public:
	Apartment(int, int);
	int heatingCost();
private: 
	int numOfTenants;
	int area;
};

