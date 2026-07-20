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

}

void playerinfo::viewscore()
{
	char ch;
	ifstream in;
	in.open("score.txt", ios::in);
	if (in.fail())
	{
		cout << "Unable to oprn the file." << endl;
		system("pause");
	}
	else
	{
		cout << "LeaderBoard: " << endl;
		cout << "Name\t\tScore" << endl;
		while (in.get(ch))
		{
			cout << ch;
		}
		cout << endl;
		in.close();
	}
}
