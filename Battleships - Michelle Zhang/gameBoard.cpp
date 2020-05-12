#include "GameBoard.h"
#include <iostream>
GameBoard::GameBoard()
{
}
void GameBoard::initialise()
{
	cout << endl;
			//
			cout << "		Player Board" << endl << endl;
			//for each row 
			for (int i = 0; i < 11; i++) {
				//for each column
				for (int j = 0; j < 11; j++) {
					if (i == 0) {
						switch (j) {
						case 1:
							gameBoard[i][j] = "1";
							break;
						case 2:
							gameBoard[i][j] = "2";
							break;
						case 3:
							gameBoard[i][j] = "3";
							break;
						case 4:
							gameBoard[i][j] = "4";
							break;
						case 5:
							gameBoard[i][j] = "5";
							break;
						case 6:
							gameBoard[i][j] = "6";
							break;
						case 7:
							gameBoard[i][j] = "7";
							break;
						case 8:
							gameBoard[i][j] = "8";
							break;
						case 9:
							gameBoard[i][j] = "9";
							break;
						case 10:
							gameBoard[i][j] = "10";
							break;
						default:
							break;
						}
					}
					else {
						if (j == 0) {
							switch (i) {
							case 1:
								gameBoard[i][j] = "A";
								break;
							case 2:
								gameBoard[i][j] = "B";
								break;
							case 3:
								gameBoard[i][j] = "C";
								break;
							case 4:
								gameBoard[i][j] = "D";
								break;
							case 5:
								gameBoard[i][j] = "E";
								break;
							case 6:
								gameBoard[i][j] = "F";
								break;
							case 7:
								gameBoard[i][j] = "G";
								break;
							case 8:
								gameBoard[i][j] = "H";
								break;
							case 9:
								gameBoard[i][j] = "I";
								break;
							case 10:
								gameBoard[i][j] = "J";
								break;
							default:
								break;
							}
						}
						else {
							gameBoard[i][j] = "x";
						}
					}
	
				}
			}
}// end of initialise();



//constructor update with parameters
void GameBoard::updateBoard(bool,int,char)
{

}
//default parameter
void GameBoard::updateBoard()
{

}