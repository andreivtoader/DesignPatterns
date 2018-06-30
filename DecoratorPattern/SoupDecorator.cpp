//
// Created by andrei on 30.06.2018.
//

#include "SoupDecorator.h"
#include <iostream>

SoupDecorator::SoupDecorator(ISoup* decoratedSoup)
    : soup_(decoratedSoup)
{
    std::cout << "SoupDecorator ctor..." << std::endl;
}

SoupDecorator::~SoupDecorator()
{
    std::cout << "SoupDecorator dtor..." << std::endl;
}

void SoupDecorator::addIngredients()
{
    if(soup_)
    {
        soup_->addIngredients();
    }
}


