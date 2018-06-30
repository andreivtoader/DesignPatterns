//
// Created by andrei on 30.06.2018.
//

#ifndef DECORATORPATTERN_SOUPWITHMEAT_H
#define DECORATORPATTERN_SOUPWITHMEAT_H


#include "SoupDecorator.h"

class SoupWithMeat : public SoupDecorator
{
public:
    SoupWithMeat(ISoup* decoratedSoup);
    ~SoupWithMeat();

    void addIngredients() override;

};


#endif //DECORATORPATTERN_SOUPWITHMEAT_H
