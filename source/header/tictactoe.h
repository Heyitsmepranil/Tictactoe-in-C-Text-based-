#ifndef TICTACTOE_H
#define TICTACTOE_H
#include"header/playerinfo.h"
class TicTacToe : public playerinfo // Class responsible for major logic and functionality of the game.
{

private:

	char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} }; //Board.
	int count = 0, end = 0; //Codition variable for proper funtionality of the game.

public:

	void view();//Function that displays the board and player names whenever it is called and needed.
	double edit(int choice, char player); //Function responsible for taking the choices of the players and applyinf it in the board. It also checks weather the game has ended or not.
	int check(); //Functions to check the winning conditions has met or not.
	void reset(); //Function responsible to reset the board and the variables that checks for the conditions for the game to end.

};

#endif