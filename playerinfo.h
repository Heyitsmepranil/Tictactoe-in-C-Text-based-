#ifndef PLAYERINFO_H
#define PLAYERINFO_H

class playerinfo
{
protected:
	std::string playerx; //Stores the name of player.
	std::string playero;
	int playerxscore = 0; //Stores the score of player.
	int playeroscore = 0;
public:
	playerinfo(); //Constructor that takes the name of the players and stores them for future use.
	void score(); //Function that displays the score of the players whenever it is called and needed.
};

#endif