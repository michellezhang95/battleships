﻿#include <iostream>;
#include <windows.h>;
#include <string>;

using namespace std;

// player and AI player
// same functions but AI player doesn"t require user input, just automatically calculate positions

//classes
// player
// AI opponent

// variables
// set battleships as arrays with their respective sizes
string air_carrier[5] = {"A", "A", "A", "A", "A"};
string battleship[4] = { "B","B","B","B" };
string destroyer[3] = { "D","D","D" };
string submarine[3] = { "S","S","S" };
string patrol_boat[2] = { "P","P" };

//functions
// before game begins players choose where to put their ships (2) main should call this function
//			to begin with, only draw player"s board so that they can place their ship
//			player can choose if the ship is placed horizontally or vertically
//			within this function, call start function when ready
// start/play function (1 nano sub)
//			in this function, then draw enemy board next to the player"s board
// RNG choose who starts (1 nano sub)
// toggle turn passing (1) 
// re-draw function after each turn ,gotoxy (1) 
// end game function, restart (1)
void initialise();
void drawBoard();
void GotoXY(int, int);

//data structures
// 2d array to store game board changes
string gameBoard[12][12];

int main() {
	initialise();

	int iTemp;
	cin >> iTemp;
	return 0;
}
void GotoXY(int x, int y) {
	COORD point;
	point.X = x;
	point.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), point);
}
void initialise() {
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
	//
	drawBoard();
	cout << "To start, place your ships on the board...";
	//GotoXY(60, 5);
	

}

	void drawBoard() {
		for (int i = 0; i < 11; i++) {
			if (i == 0) cout << "     ";
			for (int j = 0; j < 12; j++) {
				if (j == 11) {
					cout << endl << endl;
				}
				cout << gameBoard[i][j];
				cout << "    ";
			}
		}
	}