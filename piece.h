#pragma once
#include <iostream>


class Piece: public Board
{
private:
	int row;
	int cal;
	player& currPlayer;
	char role;
public:
	virtual bool isValidMove();
};