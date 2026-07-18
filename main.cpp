/*
Programmer's name: Pranil Tandukar
Program Description: A simple TicTacToe/Alucross Game with move counter, data storing and rematch feature
*/

//main function that runs the game and calls the functions from the other classes to run the game properly.

#include<iostream>
#include"playerinfo.h"
#include"tictactoe.h"
using namespace std;

int main()
{
	int end = 0, i = 1;
	double condition;
	int c1;
	char c2, rematch;

	TicTacToe t;

	do
	{
		t.view();

		cout << "Enter the position of your choice (1-9): \n";

		while (end == 0)
		{
			if (i % 2 != 0)
			{
				c2 = 'X';

				cout << "Player X's turn: ";
				cin >> c1;
			}
			else
			{
				c2 = 'O';

				cout << "Player O's turn: ";
				cin >> c1;
			}

			i++;
			condition = t.edit(c1, c2);
			end = (int)condition;

			if (condition == 0.1)
			{
				i--;
			}

			system("cls");
			t.view();
		}

		end = 0;
		t.reset();

		t.score();

		cout << "Rematch? (Y/N): ";
		cin >> rematch;

	} while (rematch == 'Y' || rematch == 'y');


	return 0;
}