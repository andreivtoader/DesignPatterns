//
// Created by andrei on 25.07.2018.
//

#ifndef OBSERVERPATTERN_OBSERVABLE_H
#define OBSERVERPATTERN_OBSERVABLE_H

#include <list>

#include "IObserver.h"

class Observable
{
public:
    Observable() = default;
    virtual ~Observable() = default;

    void addObserver(const IObserver* observer);
    void notifyObservers();

private:

    std::list<IObserver*> observers_;
};

#endif //OBSERVERPATTERN_OBSERVABLE_H
