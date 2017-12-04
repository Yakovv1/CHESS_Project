#pragma once
#include <iostream>
#include "Board.h"
#include "Player.h"

class Player;
class Piece: public Board
{
private:
	int row;
	int cal;
	Player& currPlayer;
	char role;
public:
	Piece(int row, int cal, Player& currPlayer, char Role);
	~Piece();
	virtual bool isValidMove();
};