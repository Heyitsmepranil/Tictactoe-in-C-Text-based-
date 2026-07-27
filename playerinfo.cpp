// The code below defines the function declared in the header file playerinfo.h. 

#include<iostream>
#include<fstream>
#include"playerinfo.h"

using namespace std;

void playerinfo::info()
{
	cout << "Enter the name of player X: ";
	cin >> playerx;
	cout << "Enter the name of player O: ";
	cin >> playero;
}

void playerinfo::score()
{
	cout << "Player O's score: " << playeroscore << endl;
	cout << "Player X's score: " << playerxscore << endl;
}

void playerinfo::store()
{
	ofstream out;
	out.open("score.txt", ios::app);

	int score;
	string player;

	if (out.fail())
	{
		cout << "Unable to open the file." << endl;
		out.close();
		system("pause");
	}
	else
	{
		out << playerx << " " << playerxscore << " vs " << playero << " " << playeroscore << endl;
		out.close();
	}
}

void playerinfo::viewscore()
{
	char ch;
	int c;
	ifstream in;
	in.open("score.txt", ios::in);
	if (in.fail())
	{
		cout << "Unable to oprn the file." << endl;
		in.close();
		system("pause");
	}
	else
	{
		cout << "Score Log: " << endl;
		while (in.get(ch))
		{
			cout << ch;
		}
		cout << endl;
		in.close();
	}
}
