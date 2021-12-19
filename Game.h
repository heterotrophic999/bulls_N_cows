//
// Created by Admin on 19.12.2021.
//

#include "Controller.h"
#include "Model.h"
#include "View.h"
#include "HumanPlayer.h"
#include "CompPlayer.h"

#ifndef BULLS_N_COWS_GAME_H
#define BULLS_N_COWS_GAME_H


class Game {
public:
    Iplayer *player1;
    Iplayer *player2;
    Model model;
    Controller controller;
    View view;
    int choice;

    Game(int choice);
    void createPlayers();
    bool turn1(Iplayer & player);
    void play();
};


#endif //BULLS_N_COWS_GAME_H
