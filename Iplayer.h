//
// Created by Admin on 18.12.2021.
//

#ifndef BULLS_N_COWS_IPLAYER_H
#define BULLS_N_COWS_IPLAYER_H


class Iplayer {
public:
    int num[4] = {0, 0, 0, 0};
    int turnNorm[4] = {0, 0, 0, 0};
    int cows = 0;
    int bulls = 0;

    virtual void createNum() = 0;
    virtual void makeMove() = 0;
};


#endif //BULLS_N_COWS_IPLAYER_H
