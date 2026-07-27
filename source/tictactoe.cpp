// The code below defines the function declared in the header file tictactoe.h. 

#include<iostream>
#include"playerinfo.h"
#include"tictactoe.h"

using namespace std;

void TicTacToe::view() 
{

	system("cls");
	
	int i, j;

	cout << playerx << "[X] VS " << playero << "[O]\t\t\tMove number: "<<count+1<<endl<<endl;

	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
		{

			cout << " " << board[i][j] << " ";
			if (j < 2) cout << "|";

		}
		cout << endl;
		if(i<2) cout << "___ ___ ___" << endl;
		cout << endl;
	}
}

double TicTacToe::edit(int choice, char player) 
{
	int i = (choice - 1) / 3;
	int j = (choice - 1) % 3;
		
	if (board[i][j] != ' ')
	{
		cout << "Invalid move! Try again." << endl;
				
		system("pause");
		return 0.1;
	}
			
	board[i][j] = player;
	count++;
			
	if (count >= 5)
	{
		end = check();
	}
	if (end == 1)
	{
			
		view();
			
		cout << player << " wins the game!" << endl;
				
		switch (player)
		{
			case 'X':
				playerxscore++;
				break;
			case 'O':
				playeroscore++;
				break;
		}

		system ("pause");
		return 1;
	
	}	
	else if (count >= 9 && end == 0)
	{
		view();
		cout << "It's a draw!" << endl;
			
		system("pause");
		return 1;
	}
	else
	{
		return 0;
	}
}

int TicTacToe::check()
{
	int i, j;
			
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
		{
			if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0]!=' ') return 1;
			if (board[0][j] == board[1][j] && board[0][j] == board[2][j] && board[0][j]!=' ') return 1;
			if (board[1][1] == board[2][2] && board[1][1] == board[0][0] && board[1][1]!=' ') return 1;	
			if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2]!=' ') return 1;
		}
	}
			
	return 0;
}

void TicTacToe::reset()
{
	int i, j;

	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
		{
			board[i][j] = ' ';
		}
	}
	count = 0;
	end = 0;
}