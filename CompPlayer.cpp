//
// Created by Admin on 19.12.2021.
//

#include "CompPlayer.h"
#include <iostream>
using namespace std;

void CompPlayer::createNum() {
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

void CompPlayer::makeMove() {
    int i = 0;
    int f = 0;
    while (i < 4) {
        this->turnNorm[i] = rand() % 10;
        for (int j = 0; j < i; j++) {
            if (this->turnNorm[i] == this->turnNorm[j]) {
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
