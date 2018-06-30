//
// Created by andrei on 30.06.2018.
//

#ifndef DECORATORPATTERN_SOUPWITHVEGETABLES_H
#define DECORATORPATTERN_SOUPWITHVEGETABLES_H


#include "SoupDecorator.h"

class SoupWithVegetables : public SoupDecorator
{
public:
    SoupWithVegetables(ISoup* decoratedSoup);
    ~SoupWithVegetables();

    void addIngredients() override;

};


#endif //DECORATORPATTERN_SOUPWITHVEGETABLES_H
