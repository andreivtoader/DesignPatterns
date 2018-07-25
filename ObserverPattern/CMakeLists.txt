cmake_minimum_required(VERSION 3.9)
project(ObserverPattern)

set(CMAKE_CXX_STANDARD 14)

add_executable(ObserverPattern main.cpp api/IObserver.h api/Observable.cpp api/Observable.h domain/NorthPlayer.cpp domain/NorthPlayer.h domain/SouthPlayer.cpp domain/SouthPlayer.h domain/Playboard.cpp domain/Playboard.h api/IPlayer.h domain/WestPlayer.cpp domain/WestPlayer.h domain/EastPlayer.cpp domain/EastPlayer.h api/IPlayboard.h)