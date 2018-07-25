//
// Created by andrei on 25.07.2018.
//

#include "NorthPlayer.h"

#include <iostream>

NorthPlayer::NorthPlayer(Playboard& playboard)
    : playboard_(playboard)
{
    playboard_.addObserver(this);
}


void NorthPlayer::onUpdated()
{
    std::cout << "NorthPlayer::Playboard has changed..." << std::endl;
}

void NorthPlayer::play()
{
    std::cout << "North player just played something. Get ready to rumble!" << std::endl;
    playboard_.notifyObservers();
}
