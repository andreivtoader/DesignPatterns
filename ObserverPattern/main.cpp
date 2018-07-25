#include <iostream>

#include "domain/NorthPlayer.h"
#include "domain/SouthPlayer.h"
#include "domain/Playboard.h"
#include "domain/WestPlayer.h"
#include "domain/EastPlayer.h"
#include <memory>
int main()
{
    Playboard playboard;

    NorthPlayer northPlayer(playboard);
    SouthPlayer southPlayer(playboard);
    WestPlayer westPlayer(playboard);
    EastPlayer eastPlayer(playboard);

    std::cout << "----------------------------" << std::endl;
    northPlayer.play();
    std::cout << "----------------------------" << std::endl;
    southPlayer.play();
    std::cout << "----------------------------" << std::endl;
    westPlayer.play();
    std::cout << "----------------------------" << std::endl;
    eastPlayer.play();
    std::cout << "----------------------------" << std::endl;

    return 0;
}