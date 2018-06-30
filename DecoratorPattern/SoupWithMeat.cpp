//
// Created by andrei on 30.06.2018.
//

#include "SoupWithMeat.h"
#include <iostream>

SoupWithMeat::SoupWithMeat(ISoup* decoratedSoup)
    : SoupDecorator(decoratedSoup)
{
    std::cout << "SoupWithMeat ctor..." << std::endl;
}

SoupWithMeat::~SoupWithMeat()
{
    std::cout << "SoupWithMeat dtor..." << std::endl;
}

void SoupWithMeat::addIngredients()
{
    SoupDecorator::addIngredients();
    std::cout << "Adding some meat now..." << std::endl;
}
