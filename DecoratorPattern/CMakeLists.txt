cmake_minimum_required(VERSION 3.9)
project(DecoratorPattern)

set(CMAKE_CXX_STANDARD 17)

add_executable(DecoratorPattern main.cpp ISoup.h BasicSoup.cpp BasicSoup.h SoupDecorator.cpp SoupDecorator.h SoupWithVegetables.cpp SoupWithVegetables.h SoupWithMeat.cpp SoupWithMeat.h SoupWithSalt.cpp SoupWithSalt.h)