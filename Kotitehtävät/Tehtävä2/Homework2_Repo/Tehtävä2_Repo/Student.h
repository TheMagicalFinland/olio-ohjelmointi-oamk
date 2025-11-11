#pragma once
#include <string>
class Student
{
private:
	int studentNumber;
	double average;
	std::string name;
public:

	void setName(std::string);
	void setStudentNumber(int);
	void setAverage(double);

	double getAverage();
	int getStudentNumber();
	std::string getName();
};

