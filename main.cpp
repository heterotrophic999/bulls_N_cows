#include <iostream>
//#include "HumanPlayer.h"
//#include "CompPlayer.h"
//#include "Controller.h"
//#include "Model.h"
//#include "View.h"
#include "Game.h"
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    int choice;
    cin >> choice;
    Game game(choice);
    game.play();
}
