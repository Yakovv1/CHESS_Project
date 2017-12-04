#pragma once
#include <iostream>
#include "piece.h"
#include <string>

using namespace std;
class Piece;
class Board {

private:
	Piece brd[8][8];

public:
	bool tryMove();
	bool move();
	bool undoMove();
	string getString();
};