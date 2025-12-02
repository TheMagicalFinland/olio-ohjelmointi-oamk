#include <iostream>
#include <string>
#include "ClassB.h"
#include "ClassA1.h"
#include "ClassA2.h"

int main()
{
    int a = 5;
    std::cout << "Arvo on " + std::to_string(a) + ", osoite on " << &a << std::endl;
    //-------------//
    int* pointerA = &a;
    std::cout << "Pointterin osoittama osoite on " << pointerA << std::endl;
    std::cout << "Pointterin muistipaikan arvo on " << *pointerA << std::endl;
    //------------//
    int& refA = a;
    std::cout << "Referenssin refA arvo on: " << refA << std::endl;
    std::cout << "Referenssin refA muistipaikan osoite on: " << &refA << std::endl;
    //------------//
    int b = 6;
    //-----------//
    // Voitko Kokeile voitko muuttaa refA:n osoittamaan b:n osoitteeseen?
    // Vastaus netistä: Once defined, a reference cannot be reassigned because it is an alias to its target
    // eli et voi.
    pointerA = &b; // osoitetaan bhen.
    // Kun tähtimerkkiä ei ole, osoitetaan muistipaikkaan,
    // kun tähtimerkki on, osoitetaan muistipaikan arvoon ja voidaan myös
    // asettaa esimerkiksi muuttujaan ko. pointteri, koska se käyttäytyy täten
    // samalla tavalla kuin normaali muuttuja.
    int pointerTest = *pointerA; // = 5
    //-----------//
    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    std::cout << "objB: " << objB.getInfo() << std::endl;
    std::cout << "objA1: " << objA1.getBinfo() << std::endl;
    //-----------//
    ClassB& refB = objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");
    std::cout << "objB: " << objB.getInfo() << std::endl;
    std::cout << "objA2 " << objA2.getBinfo() << std::endl;
    std::cout << std::endl;
}