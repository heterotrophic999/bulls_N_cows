//
// Created by Admin on 19.12.2021.
//

#include "Controller.h"

using namespace std;

bool Controller::turnCheck(Iplayer & player) {
    for (int i = 3; i >= 0; i--){
        for (int j = 0; j < i; j++){
            if (player.turnNorm[i] == player.turnNorm[j]) {
                cout << "THE NUMBERS MUST BE DIFFERENT!!!\n";
                return false;
            }
        }
    }
    return true;
}

//void Controller::setPlayer(HumanPlayer &player) {
//    this->player1 = player;
//}

//Controller::Controller(HumanPlayer & player) {
//    setPlayer(player);
//}
