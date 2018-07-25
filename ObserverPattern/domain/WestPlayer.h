//
// Created by andrei on 25.07.2018.
//

#ifndef OBSERVERPATTERN_WESTPLAYER_H
#define OBSERVERPATTERN_WESTPLAYER_H


#include "../api/IObserver.h"
#include "Playboard.h"

class WestPlayer : public IObserver
{
public:
    explicit WestPlayer(Playboard& playboard);

    void onUpdated() override;
    void play();

private:
    Playboard& playboard_;
};


#endif //OBSERVERPATTERN_WESTPLAYER_H
