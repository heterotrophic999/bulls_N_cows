//
// Created by Admin on 19.12.2021.
//

#include "Model.h"

using namespace std;

void Model::bullCount(Iplayer &player) {
    for (int i = 0; i < 4; i++) {
        if (player.turnNorm[i] == player.num[i]) {
            player.bulls++;
        }
    }
}

void Model::cowCount(Iplayer &player) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (player.turnNorm[i] == player.num[j]) {
                player.cows++;
                break;
            }
        }
    }
}

bool Model::winCheck(Iplayer &player) {
    if (player.bulls == 4) {
        return true;
    } else return false;
}

//Model::Model(Iplayer &player) {
//    this->player = &player;
//}
