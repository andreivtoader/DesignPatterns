//
// Created by andrei on 25.07.2018.
//

#ifndef OBSERVERPATTERN_NORTHPLAYER_H
#define OBSERVERPATTERN_NORTHPLAYER_H


#include "../api/IObserver.h"
#include "Playboard.h"

class NorthPlayer : public IObserver
{
public:
    explicit NorthPlayer(Playboard& playboard);

    void onUpdated() override;
    void play();

private:

    Playboard& playboard_;

};


#endif //OBSERVERPATTERN_NORTHPLAYER_H
