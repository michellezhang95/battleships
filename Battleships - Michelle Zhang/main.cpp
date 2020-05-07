#include <iostream>;
#include <Windows.h>;
using namespace std;

// player and AI player
// same functions but AI player doesn't require user input, just automatically calculate positions

//classes
// player
// AI opponent

// variables
// set battleships as arrays with their respective sizes
char air_carrier[5] = {'A', 'A', 'A', 'A', 'A'};
char battleship[4] = { 'B','B','B','B' };

//functions
// before game begins players choose where to put their ships (2) main should call this function
//			to begin with, only draw player's board so that they can place their ship
//			within this function, call start function when ready
// start/play function (1 nano sub)
//			in this function, then draw enemy board next to the player's board
// RNG choose who starts (1 nano sub)
// toggle turn passing (1) 
// re-draw function after each turn ,gotoxy (1) 
// end game function, restart (1)
void placeShips();


int main() {
	placeShips();

}