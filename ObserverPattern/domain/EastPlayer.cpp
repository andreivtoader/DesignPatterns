//
// Created by andrei on 25.07.2018.
//

#include "EastPlayer.h"
#include <iostream>

EastPlayer::EastPlayer(Playboard& playboard)
    : playboard_(playboard)
{
    playboard_.addObserver(this);
}

void EastPlayer::onUpdated()
{
    std::cout << "EastPlayer::Playboard has changed..." << std::endl;
}

void EastPlayer::play()
{
    std::cout << "East player just played something. Oh no!" << std::endl;
    playboard_.notifyObservers();
}
