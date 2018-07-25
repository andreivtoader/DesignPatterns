//
// Created by andrei on 25.07.2018.
//

#include <algorithm>
#include "Observable.h"

void Observable::notifyObservers()
{
    const auto notifyObservers = [] (IObserver* const observer) { observer->onUpdated(); };
    std::for_each(observers_.begin(), observers_.end(), notifyObservers);
}

void Observable::addObserver(const IObserver* observer)
{
    observers_.emplace_back(const_cast<IObserver*>(observer));
}
