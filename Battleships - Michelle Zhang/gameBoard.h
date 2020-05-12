#pragma once
#include <string>
using namespace std;
class GameBoard
{
private:
	
public:
	GameBoard();
	string gameBoard[12][12];
	void initialise();
	void updateBoard(bool player, int x, char y);
	void updateBoard();
};

