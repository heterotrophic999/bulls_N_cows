#include <iostream>
//#include "HumanPlayer.h"
//#include "CompPlayer.h"
//#include "Controller.h"
//#include "Model.h"
//#include "View.h"
#include "Game.h"

using namespace std;

int main() {
    int choice;
    cin >> choice;
    Game game(choice);
    game.play();

//    HumanPlayer player1;
//    HumanPlayer player2;
//    Controller ctrl;
//    Model model;
//    View view;
//
//    player1.createNum();
//    player2.createNum();
//
//    while (true) {
//        player1.bulls = 0;
//        player1.cows = 0;
//        player2.bulls = 0;
//        player2.cows = 0;
//        for (int & i : player1.turnNorm){
//            i = 0;
//        }
//        for (int & i : player2.turnNorm){
//            i = 0;
//        }
//
//        player1.makeMove();
//        while (!ctrl.turnCheck(player1)){
//            player1.makeMove();
//        }
//        model.bullCount(player1);
//        model.cowCount(player1);
//        if (model.winCheck(player1)) {
//            //view.printWin();
//            cout << "Player1 win!";
//            return 0;
//        }else {
//            cout << "Player1:";
//            view.printTurn(player1);
//        }
//
//        player2.makeMove();
//        if (!ctrl.turnCheck(player2))
//            return 0;
//        model.bullCount(player2);
//        model.cowCount(player2);
//        if ((model.winCheck(player2))){
//            cout << "Player2 win!";
//            return 0;
//        }else {
//            cout << "Player2:";
//            view.printTurn(player2);
//        }
//    }
}
