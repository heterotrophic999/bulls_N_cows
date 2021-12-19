//
// Created by Admin on 19.12.2021.
//

#include "Iplayer.h"
#include <iostream>

#ifndef BULLS_N_COWS_MODEL_H
#define BULLS_N_COWS_MODEL_H


class Model {
public:
    //Model(Iplayer & player);
    void bullCount(Iplayer & player);
    void cowCount(Iplayer & player);
    bool winCheck(Iplayer  & player);
};


#endif //BULLS_N_COWS_MODEL_H
