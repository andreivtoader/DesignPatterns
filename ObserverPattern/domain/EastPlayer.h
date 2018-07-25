//
// Created by andrei on 25.07.2018.
//

#ifndef OBSERVERPATTERN_EASTPLAYER_H
#define OBSERVERPATTERN_EASTPLAYER_H


#include "../api/IObserver.h"
#include "Playboard.h"

class EastPlayer : public IObserver
{
public:
    explicit EastPlayer(Playboard& playboard);

    void onUpdated() override;
    void play();

private:
    Playboard& playboard_;
};


#endif //OBSERVERPATTERN_EASTPLAYER_H
