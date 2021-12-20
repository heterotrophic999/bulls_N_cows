//
// Created by Admin on 19.12.2021.
//

#include <iostream>
#include "Game.h"

using namespace std;

Game::Game(int choice) {
    this->choice = choice;
    model = Model();
    controller = Controller();
    view = View();
    createPlayers();
    player1->createNum();
    player2->createNum();
}

void Game::createPlayers() {
    player1 = new HumanPlayer();
    if (choice == 1)
        player2 = new CompPlayer();
    else if (choice == 2)
        player2 = new HumanPlayer();
}

bool Game::turn1(Iplayer & player, int n) {
    player.bulls = 0;
    player.cows = 0;

    for (int & i : player.turnNorm){
        i = 0;
    }

    player.makeMove();
    while (!controller.turnCheck(player)){
        player.makeMove();
    }

    model.bullCount(player);
    model.cowCount(player);

    if (model.winCheck(player)) {
        view.printTurn(player, n);
        return true;
    }else {
        view.printTurn(player, n);
    }
    return false;
}

void Game::play() {
    while (true) {
        bool win1 = turn1(*player1, 1);
        bool win2 = turn1(*player2, 2);

        if (win1 && win2) {
            view.printDraw();
            break;
        } else if (win1){
            view.printWin(1);
            break;
        } else if (win2){
            view.printWin(2);
            break;
        }
    }
    view.printNum(*player1, *player2);
}
