#pragma once

#include "ClassB.h"
#include <string>

class ClassA1
{
private:
    ClassB objectB;

public:
    ClassA1(const ClassB& value);

    std::string getBinfo() const;

    void setBinfo(const std::string& value);
};
