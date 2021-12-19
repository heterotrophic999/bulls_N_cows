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

bool Game::turn1(Iplayer & player) {
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
        view.printTurn(player);
        return true;
    }else {
        view.printTurn(player);
    }
    return false;

//    player2.makeMove();
//    if (!ctrl.turnCheck(player2))
//        return 0;
//    model.bullCount(player2);
//    model.cowCount(player2);
//    if ((model.winCheck(player2))){
//        cout << "Player2 win!";
//        return 0;
//    }else {
//        cout << "Player2:";
//        view.printTurn(player2);
//    }
}

void Game::play() {
    while (true) {
        bool win1 = turn1(*player1);
        bool win2 = turn1(*player2);

        if (win1 && win2) {
            cout << "Draw!";
            break;
        } else if (win1){
            cout << "Player1 wins!";
            break;
        } else if (win2){
            cout << "Player2 wins!";
            break;
        }
    }
}
