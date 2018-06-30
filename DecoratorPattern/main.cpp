#include <iostream>
#include <memory>

#include "ISoup.h"
#include "SoupWithSalt.h"
#include "BasicSoup.h"
#include "SoupWithVegetables.h"
#include "SoupWithMeat.h"

int main()
{

    ISoup* soupWithSalt = new SoupWithSalt(new BasicSoup);
    std::cout << std::endl << std::endl;
    soupWithSalt->addIngredients();

    std::cout << std::endl;
    std::cout << "------------------------------------------------------" << std::endl;

    ISoup* soupWithSaltAndVegetables = new SoupWithVegetables(new SoupWithSalt(new BasicSoup));
    std::cout << std::endl << std::endl;
    soupWithSaltAndVegetables->addIngredients();
    std::cout << "------------------------------------------------------" << std::endl;

    ISoup* soupWithSaltAndVegetablesAndMeat = new SoupWithMeat(new SoupWithVegetables(new SoupWithSalt(new BasicSoup)));
    std::cout << std::endl << std::endl;
    soupWithSaltAndVegetablesAndMeat->addIngredients();
    std::cout << "------------------------------------------------------" << std::endl;

    std::cout << "Destructors:" << std::endl;

    delete soupWithSalt;
    std::cout << "------------------------------------------------------" << std::endl;

    delete soupWithSaltAndVegetables;
    std::cout << "------------------------------------------------------" << std::endl;

    delete soupWithSaltAndVegetablesAndMeat;
    std::cout << "------------------------------------------------------" << std::endl;

    return 0;
}