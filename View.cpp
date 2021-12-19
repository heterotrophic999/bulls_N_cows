//
// Created by Admin on 19.12.2021.
//

#include "View.h"

using namespace std;

void View::printTurn(Iplayer &player) {
    cout << player.bulls << " bulls " << player.cows - player.bulls << " cows" << endl << endl;
}

void View::printWin() {
    cout << "You win!";
}
