//
// Created by Admin on 18.12.2021.
//

#include "Iplayer.h"

#ifndef BULLS_N_COWS_HUMANPLAYER_H
#define BULLS_N_COWS_HUMANPLAYER_H


class HumanPlayer : public Iplayer{
public:
//    int num[4] = {0, 0, 0, 0};
//    int turnNorm[4] = {0, 0, 0, 0};
//    int turn = 0;
//    int cows = 0;
//    int bulls = 0;

    void createNum() override;
    void makeMove() override;
};


#endif //BULLS_N_COWS_HUMANPLAYER_H
