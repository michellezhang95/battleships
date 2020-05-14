#pragma once
#include "GameBoard.h"
#include "Menu.h"
class GameController
{
private:
	int generateTurnOrder();
public:
	int debug;
	void drawBoard(GameBoard);
	void gameControlStart();
	void turnPlay(int);
	void getMode(const Menu &menu); //constructor with default parameter -> default mode is normal 

};

