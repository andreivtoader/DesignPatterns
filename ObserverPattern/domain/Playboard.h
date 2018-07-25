//
// Created by andrei on 25.07.2018.
//

#ifndef OBSERVERPATTERN_PLAYBOARD_H
#define OBSERVERPATTERN_PLAYBOARD_H


#include "../api/Observable.h"

/*
 * As it is implemented now, the Playboard class does nothing,
 * is just a wrapper over Observable for the sake of "naming".
 * Furthermore, new functionality could be added here.
 *
 */

class Playboard : public Observable
{
public:
    Playboard();

private:

};


#endif //OBSERVERPATTERN_PLAYBOARD_H
