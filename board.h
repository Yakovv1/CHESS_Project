#pragma once
#include <iostream>
#include "piece.h"
#include <string>
#include "Manager.h"

#define ROW 8
#define COL 8

using namespace std;// hyish
class Piece;
class Board : public Manager
{

private:
	Piece _brd[COL][ROW];
public:
	Board();
	~Board();
	bool tryMove();
	bool move();
	bool undoMove();
	string getString();
};