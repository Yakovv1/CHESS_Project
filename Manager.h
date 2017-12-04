#pragma once
#include <iostream>
#include "piece.h"


#define VALID_MOVE 0
#define VALID_MOVE_AND_CHESS 1
#define	INVALID_MOVE_SORCE_HASNT_ROLE 2
#define INVALID_MOVE_DEST_HAS_PLAYERS_ROLE 3
#define INVALID_MOVE_MOVE_WILL_CHESS_CURR_PLAYER 4
#define INVALID_MOVE_SQUARES_INDEX_WRONG 5
#define INVALID_MOVE_ILLIGAL_MOVEMENT 6
#define INVALID_MOVE_SORCE_AND_DEST_SAME 7
#define VALID_MOVE_CHESS 8

class Piece;
class Manager
{
private:
	
public:
	virtual bool isChess();
	Manager();
	~Manager();
};

