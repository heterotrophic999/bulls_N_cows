//
// Created by Admin on 19.12.2021.
//

#include "View.h"

using namespace std;

void View::printTurn(Iplayer &player, int n) {
    cout << "Player" << n << ": " << player.bulls << " bulls " << player.cows - player.bulls << " cows" << endl << endl;
}

void View::printWin(int n) {
    cout << "Player" << n << ": " << "Wins!";
}

void View::printDraw() {
    cout << "Draw!";
}

void View::printNum(Iplayer & player1, Iplayer & player2) {
    cout << "Player1:" << '\n';
    for (int i : player1.num){
        cout << i;
        cout << '\n';
    }
    cout << "Player2:" << '\n';
    for (int i : player2.num){
        cout << i;
        cout << '\n';
    }
}
