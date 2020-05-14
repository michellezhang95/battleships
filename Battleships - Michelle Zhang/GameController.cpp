#include "GameController.h"
#include <iostream>
#include <time.h>
#include "AI_Player.h";
#include "Menu.h";
//GameController acts as the background system
//draws the board abstract from GameBoard to keep the code clean

void GameController::drawBoard(GameBoard gb) {
	
		for (int i = 0; i < 11; i++) {
			if (i == 0) cout << "     ";
			for (int j = 0; j < 12; j++) {
				if (j == 11) {
					cout << endl << endl;
				}
				cout << gb.gameBoard[i][j];
				cout << "    ";
			}
		}
		cout << endl;
		cout << "        To start, place your ships on the board...";
	
}

//when player has finished placing ships, the game starts
// then generate turn order
void GameController::gameControlStart()
{
	int turn = generateTurnOrder();
	turnPlay(turn);


}

void GameController::turnPlay(int)
{

}

void GameController::getMode(const Menu& menu)
{
	if (menu.mode == 0){
		debug = 1;
	}
}




//the controller generates turn order RNG
int GameController::generateTurnOrder() 
{
	srand(time(NULL)); //seed the PRNG
	int t;
	t = rand() % 2;  // if 1, player goes first if 0 AI goes first
	return t;
}


