#include "Student.h"

void Student::setName(std::string personName)
{
    name = personName;
}

void Student::setStudentNumber(int sNum)
{
    studentNumber = sNum;
}

void Student::setAverage(double avg)
{
    average = avg;
}

double Student::getAverage()
{
    return average;
}

// int getStudentNumber(): palauttaa opiskelijanumeron(merkkimuotoinen tunniste).
// Merkkimuotoisella tunnisteella tarkoitetaan teht‰v‰nannossa mit‰? --> Sain k‰sityksen, ett‰ palauttaa kokonaisuluvun eik‰ stringi‰.
// ^^ Jos viitsit selvent‰‰ vaikka teht‰v‰n arvioinnissa niin ei tule minulle v‰‰rinymm‰rryst‰ :)
int Student::getStudentNumber()
{
    return studentNumber;
}

std::string Student::getName()
{
    return name;
}
