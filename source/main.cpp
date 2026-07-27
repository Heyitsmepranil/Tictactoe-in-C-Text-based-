/*
Programmer's name: Pranil Tandukar
Program Description: A simple TicTacToe/Alucross Game with move counter, data storing and rematch feature
*/

//main function that runs the game and calls the functions from the other classes to run the game properly.

#include<iostream>
#include"header/mainmenu.h"
#include"header/playerinfo.h"
#include"header/tictactoe.h"
using namespace std;

void option1(TicTacToe);

int main()
{
	int choice;

	TicTacToe t;
	mainmenu m;

	do
	{
		choice = m.display();
		system("cls");
		switch (choice)
		{
		case 1:
			option1(t);
			system("pause");
			system("cls");
			break;
		case 2:
			t.viewscore();
			system("pause");
			system("cls");
			break;
		case 3:
			cout << "Exiting the game." << endl;
			break;
		default:
			cout << "Invalid choice. Please try again." << endl;
			break;
		}
	} while (choice != 3);
	return 0;
}

void option1(TicTacToe t)
{
	int end = 0, i = 1, choice;
	double condition;
	int c1;
	char c2, rematch;

	t.info();
	system("cls");

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
	t.store();
}