// The code below defines the function declared in the header file playerinfo.h. 

#include<iostream>
#include"playerinfo.h"

using namespace std;

playerinfo::playerinfo()
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

}
