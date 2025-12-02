#include "ClassA1.h"
#include "ClassB.h"
#include <iostream>

ClassA1::ClassA1(const ClassB& value) : objectB(value)
{
}

std::string ClassA1::getBinfo() const
{
    return objectB.getInfo();
}

void ClassA1::setBinfo(const std::string& value)
{
    objectB.setInfo(value);
}
