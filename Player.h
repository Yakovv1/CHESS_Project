#pragma once
#include <iostream>
#include "Manager.h"


class Player: public Manager
{
private://Avishag, we will do it togher
	bool _color;// Black is False and White is True
	Piece& _king;
	bool _movementDire; //for UP is TRUE for down is False
public:
	Player();
	~Player();
};

