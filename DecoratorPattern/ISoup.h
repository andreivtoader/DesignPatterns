//
// Created by andrei on 30.06.2018.
//

#ifndef DECORATORPATTERN_ISOUP_H
#define DECORATORPATTERN_ISOUP_H


class ISoup
{
public:
    ISoup() = default;
    virtual ~ISoup() = default;

    virtual void addIngredients() = 0;

};


#endif //DECORATORPATTERN_ISOUP_H
