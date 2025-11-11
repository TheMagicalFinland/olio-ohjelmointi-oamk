#include "Apartment.h"

Apartment::Apartment(int tenantNum, int areaSize)
{
    area = areaSize;
    numOfTenants = tenantNum;
}

int Apartment::heatingCost()
{
    return area * numOfTenants;
}
