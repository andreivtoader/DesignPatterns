//
// Created by andrei on 25.07.2018.
//

#ifndef OBSERVERPATTERN_IOBSERVER_H
#define OBSERVERPATTERN_IOBSERVER_H


class IObserver
{
public:
    virtual void onUpdated() = 0;
};


#endif //OBSERVERPATTERN_IOBSERVER_H
