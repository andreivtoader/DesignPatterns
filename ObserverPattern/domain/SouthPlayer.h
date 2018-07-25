//
// Created by andrei on 25.07.2018.
//

#ifndef OBSERVERPATTERN_SOUTHPLAYER_H
#define OBSERVERPATTERN_SOUTHPLAYER_H


#include "../api/IObserver.h"
#include "Playboard.h"

class SouthPlayer : public IObserver
{
public:
    explicit SouthPlayer(Playboard& playboard);

    void onUpdated() override;
    void play();

private:
    Playboard& playboard_;
};


#endif //OBSERVERPATTERN_SOUTHPLAYER_H
