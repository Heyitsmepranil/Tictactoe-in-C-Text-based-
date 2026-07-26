#include<iostream>
#include"mainmenu.h"
using namespace std;
int mainmenu::display()
{
	int option;

	cout << "Welcome to Tic Tac Toe!" << endl;
	cout << "1. Start Game" << endl;
	cout << "2. Score Log" << endl;
	cout << "3. Exit" << endl;
	cout << "Please select an option: ";
	cin >> option;

	return option;
}