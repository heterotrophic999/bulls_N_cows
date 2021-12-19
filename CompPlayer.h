//
// Created by Admin on 19.12.2021.
//

#include "Iplayer.h"

#ifndef BULLS_N_COWS_COMPPLAYER_H
#define BULLS_N_COWS_COMPPLAYER_H


class CompPlayer : public Iplayer{
public:
    void createNum() override;
    void makeMove() override;
};


#endif //BULLS_N_COWS_COMPPLAYER_H
