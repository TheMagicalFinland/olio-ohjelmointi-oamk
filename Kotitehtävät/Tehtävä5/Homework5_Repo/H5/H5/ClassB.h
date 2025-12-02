#pragma once
#include <string>

class ClassB
{
public:
	std::string getInfo() const;
	void setInfo(std::string value);
private:
	std::string info;
};

