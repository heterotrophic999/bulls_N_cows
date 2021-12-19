//
// Created by Admin on 18.12.2021.
//

#include "HumanPlayer.h"
#include <iostream>
using namespace std;

void HumanPlayer::createNum() {
    int i = 0;
    int f = 0;
    while (i < 4) {
        this->num[i] = rand() % 10;
        for (int j = 0; j < i; j++) {
            if (this->num[i] == this->num[j]) {
                f = 1;
                break;
            }
        }
        if (f == 0) {
            i++;
        }
        f = 0;
    }
}

void HumanPlayer::makeMove() {
    for (int & i : this->turnNorm){
        i = getchar();
        if (i == 10)
            i = getchar();
        i -= 48;
    }
}

