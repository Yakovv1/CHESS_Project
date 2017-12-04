#pragma once
#include <iostream>
#include "Manager.h"


class Player: public Manager
{
private://Avishag, we will do it togher
	bool color;// Black is False and White is True
	Piece& king;
	bool movementDire; //for UP is TRUE for down is False
public:
	Player(bool color, Piece& king, bool movemntDire);
	~Player();
};

