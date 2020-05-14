#include "Menu.h"
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
//menu will be called from main
//depending on which option the player chooses either quick play mode (no specified coords) 
//or manual placement mode is enabled

Menu::Menu() 
{
	startMenu();
	
}

Menu::~Menu()
{
}

void Menu::startMenu()
{
	cout << "Battleships" << endl;
	cout << "1. Normal Mode" << endl;
	cout << "2. Debug Mode" << endl;
	char input;
	input = _getch();
	if (input == '1') {
		mode = 1; // normal mode
		cout << "Normal";
		
	}
	else if (input == '0') {
		mode = 0; //debug mode
	}
	else { // input checking
		system("cls");
		startMenu();
	}


}	
