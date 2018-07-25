//
// Created by andrei on 25.07.2018.
//

#include "WestPlayer.h"
#include <iostream>

WestPlayer::WestPlayer(Playboard& playboard)
    : playboard_(playboard)
{
    playboard_.addObserver(this);
}

void WestPlayer::onUpdated()
{
    std::cout << "WestPlayer::Playboard has changed..." << std::endl;
}

void WestPlayer::play()
{
    std::cout << "West player just played something. Fuck yea!" << std::endl;
    playboard_.notifyObservers();
}
