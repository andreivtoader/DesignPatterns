//
// Created by andrei on 25.07.2018.
//

#include "SouthPlayer.h"
#include <iostream>

SouthPlayer::SouthPlayer(Playboard& playboard)
    : playboard_(playboard)
{
    playboard_.addObserver(this);
}

void SouthPlayer::onUpdated()
{
    std::cout << "SouthPlayer::Playboard has changed..." << std::endl;
}

void SouthPlayer::play()
{
    std::cout << "South player just played something. Shit is about to get real!" << std::endl;
    playboard_.notifyObservers();
}

