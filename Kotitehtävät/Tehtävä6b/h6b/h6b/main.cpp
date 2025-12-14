#include <QCoreApplication>
#include <iostream>
#include "exampleclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout << "I work debug";
    ExampleClass exampleClass = ExampleClass();
    exampleClass.startToWait();

    return a.exec();
}
