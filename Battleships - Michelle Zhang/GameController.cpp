#include "GameController.h"
#include <iostream>
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