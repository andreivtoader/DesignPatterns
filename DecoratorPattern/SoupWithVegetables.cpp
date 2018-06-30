//
// Created by andrei on 30.06.2018.
//

#include "SoupWithVegetables.h"
#include <iostream>

SoupWithVegetables::SoupWithVegetables(ISoup* decoratedSoup)
    : SoupDecorator(decoratedSoup)
{
    std::cout << "SoupWithVegetables ctor..." << std::endl;
}

SoupWithVegetables::~SoupWithVegetables()
{
    std::cout << "SoupWithVegetables ctor..." << std::endl;
}

void SoupWithVegetables::addIngredients()
{
    SoupDecorator::addIngredients();
    std::cout << "Adding some vegetables now..." << std::endl;
}
