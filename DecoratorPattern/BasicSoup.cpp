//
// Created by andrei on 30.06.2018.
//

#include "BasicSoup.h"
#include <iostream>

BasicSoup::BasicSoup()
{
    std::cout << "BasicSoup ctor..." << std::endl;
}

BasicSoup::~BasicSoup()
{
    std::cout << "BasicSoup dtor..." << std::endl;
}

void BasicSoup::addIngredients()
{
    std::cout << "Basic soup for now, probably just water and fat..." << std::endl;
}
