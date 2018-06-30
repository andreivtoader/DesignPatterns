//
// Created by andrei on 30.06.2018.
//

#ifndef DECORATORPATTERN_SOUPDECORATOR_H
#define DECORATORPATTERN_SOUPDECORATOR_H


#include "ISoup.h"
#include <memory>

class SoupDecorator : public ISoup
{
public:

    SoupDecorator(ISoup* decoratedSoup);
    ~SoupDecorator();

    void addIngredients() override;

private:
    std::unique_ptr<ISoup> soup_ = nullptr;
};


#endif //DECORATORPATTERN_SOUPDECORATOR_H
