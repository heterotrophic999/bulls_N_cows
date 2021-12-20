//
// Created by Admin on 19.12.2021.
//

#include "Iplayer.h"
#include <iostream>

#ifndef BULLS_N_COWS_VIEW_H
#define BULLS_N_COWS_VIEW_H


class View {
public:
    void printTurn(Iplayer & player, int n);
    void printWin(int n);
    void printDraw();
    void printNum(Iplayer & player1, Iplayer & player2);
};


#endif //BULLS_N_COWS_VIEW_H
