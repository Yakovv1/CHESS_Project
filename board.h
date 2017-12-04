#pragma once
#include <iostream>
#include "piece.h"
#include <string>
#include "Manager.h"

#define ROW 8
#define CAL 8

using namespace std;
class Piece;
class Board : public Manager
{

private:
	Piece brd[CAL][ROW];

public:
	bool tryMove();
	bool move();
	bool undoMove();
	string getString();
};