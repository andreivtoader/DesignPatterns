//
// Created by andrei on 30.06.2018.
//

#ifndef DECORATORPATTERN_SOUPWITHSALT_H
#define DECORATORPATTERN_SOUPWITHSALT_H


#include "SoupDecorator.h"

class SoupWithSalt : public SoupDecorator
{
public:
    SoupWithSalt(ISoup* decoratedSoup);
    ~SoupWithSalt();

    void addIngredients() override;
};


#endif //DECORATORPATTERN_SOUPWITHSALT_H
