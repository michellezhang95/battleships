#include <iostream>;
#include <windows.h>;

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
char destroyer[3] = { 'D','D','D' };
char submarine[3] = { 'S','S','S' };
char patrol_boat[2] = { 'P','P' };

//functions
// before game begins players choose where to put their ships (2) main should call this function
//			to begin with, only draw player's board so that they can place their ship
//			player can choose if the ship is placed horizontally or vertically
//			within this function, call start function when ready
// start/play function (1 nano sub)
//			in this function, then draw enemy board next to the player's board
// RNG choose who starts (1 nano sub)
// toggle turn passing (1) 
// re-draw function after each turn ,gotoxy (1) 
// end game function, restart (1)
void placeShips();
void GotoXY(int, int);

//data structures
// 2d array to store game board changes
char gameBoard[12][12];

int main() {
	placeShips();

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
void placeShips() {
	cout << endl; 
	//
	cout << "		Player Board" << endl << endl;
	//for each row 
	for (int i = 0; i < 12; i++) {
		//for each column
		cout << " ";
		for (int j = 0; j < 12; j++) {
			if (i == 0) {
				switch (j) {
				case 2:
					gameBoard[i][j] = '1';
					break;
				}
				cout << gameBoard[i][j];
				

			}
			else {

			}
			if (j == 10) {
				cout << endl << endl;
			} 
			else {
				if (j == 0) {
					switch (i) {
					case 1:
						gameBoard[i][j] = 'A';
						break;
					case 2:
						gameBoard[i][j] = 'B';
						break;
					case 3: 
						gameBoard[i][j] = 'C';
						break;
					case 4: 
						gameBoard[i][j] = 'D';
						break;
					case 5: 
						gameBoard[i][j] = 'E';
						break;
					case 6:
						gameBoard[i][j] = 'F';
						break;
					case 7: 
						gameBoard[i][j] = 'G';
						break;
					case 8:
						gameBoard[i][j] = 'H';
						break;
					case 9:
						gameBoard[i][j] = 'I';
						break;
					case 10:
						gameBoard[i][j] = 'J';
						break;
					default:
						break;
					}
				}
				else {
					gameBoard[i][j] = 'x';
				}
				cout << gameBoard[i][j];
				cout << "    ";	
			}
		}
	}
	//
	cout << "To start, place your ships on the board...";
	GotoXY(60, 5);

}