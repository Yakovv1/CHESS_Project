#pragma once
#include <iostream>
#include "Manager.h"


class Player: public Manager
{
private:
	bool color;// Black is False and White is True
	Piece& king;
	bool movementDire; //for UP is TRUE for down is False
public:
	Player();
	~Player();
};

