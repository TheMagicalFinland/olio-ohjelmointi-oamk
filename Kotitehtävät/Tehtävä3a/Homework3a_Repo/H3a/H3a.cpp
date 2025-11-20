#include <iostream>
#include "Chef.h"
#include "ItalianChef.h"

int main()
{
    Chef chef = Chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();
    // Odotetaan k‰ytt‰j‰‰
    std::cin.get();
    // Tehd‰‰n tyhj‰ kohta terminaaliin.
    std::cout.clear();
    ItalianChef chef2 = ItalianChef("Anthony Bourdain");
    chef2.makeSalad();
    chef2.makeSoup();
    chef2.makePasta();
    std::cout << "name of Italian Chef is " + chef2.getName() << std::endl;
}