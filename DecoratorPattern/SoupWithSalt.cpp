//
// Created by andrei on 30.06.2018.
//

#include "SoupWithSalt.h"
#include <iostream>

SoupWithSalt::SoupWithSalt(ISoup* decoratedSoup)
    : SoupDecorator(decoratedSoup)
{
    std::cout << "SoupWithSalt ctor..." << std::endl;
}

SoupWithSalt::~SoupWithSalt()
{
    std::cout << "SoupWithSalt dtor..." << std::endl;
}

void SoupWithSalt::addIngredients()
{
    SoupDecorator::addIngredients();
    std::cout << "Adding some salt now..." << std::endl;
}
