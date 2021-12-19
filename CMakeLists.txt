cmake_minimum_required(VERSION 3.20)
project(bulls_N_cows)

set(CMAKE_CXX_STANDARD 14)

add_executable(bulls_N_cows main.cpp Iplayer.cpp Iplayer.h HumanPlayer.cpp HumanPlayer.h Controller.cpp Controller.h Model.cpp Model.h View.cpp View.h CompPlayer.cpp CompPlayer.h Game.cpp Game.h)
