
#include <iostream>;
#include <windows.h>;
#include <string>;
#include "Player.h";
#include "GameBoard.h";
#include "GameController.h";
#include "Menu.h";

using namespace std;

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

void drawBoard();
//function takes in custom coordinates or if empty set default parameter -> let RNG choose spaces for the ships
void placeShips();

void GotoXY(int, int);

// class constructor to also take in the ship coordinates in a data structure
// check if input provided for different ships otherwise set default

int main() {
	//default constructors 
	GameController gameControl;
	GameBoard gameBoard;
	Menu menu;
	
	//initialise the gameBoard with an empty grid awaiting player input
	gameBoard.initialise();
	
	gameControl.drawBoard(gameBoard);
	GotoXY(60, 5);



	int iTemp;
	cin >> iTemp;
	return 0;
}

//function to set pointer in console location
void GotoXY(int x, int y) {
	COORD point;
	point.X = x;
	point.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), point);
}


	

