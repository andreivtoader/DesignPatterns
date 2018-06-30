//
// Created by andrei on 30.06.2018.
//

#ifndef DECORATORPATTERN_BASICSOUP_H
#define DECORATORPATTERN_BASICSOUP_H


#include "ISoup.h"

class BasicSoup : public ISoup
{
public:
    BasicSoup();
    ~BasicSoup();

    void addIngredients() override;
};


#endif //DECORATORPATTERN_BASICSOUP_H
