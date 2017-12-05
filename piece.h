#pragma once
#include <iostream>
#include "Board.h"
#include "Player.h"

class Player;
class Piece: public Board
{
private:
	int _row;
	int _col;
	Player& _currPlayer;
	char _role;
public:
	Piece(int row, int col, Player& currPlayer, char Role);
	~Piece();
	void setRole(char _newRole);
	virtual bool isValidMove();
};