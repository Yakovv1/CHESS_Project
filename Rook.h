#pragma once
#include "piece.h"


class Rook:public Piece
{

public:
	virtual bool isvalidMove();
	Rook();
	~Rook();
};

