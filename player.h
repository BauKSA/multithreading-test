#pragma once
#include "character.h"

#ifndef _PLAYER_
#define _PLAYER_

class Player : public Character {
private:
	bool in_game;
public:
	Player(int _x_pos = 0, int _y_pos = 0, char _body = '■') :
		Character(_x_pos, _y_pos, _body) {
		in_game = true;
	}

	void check_collision(Direction dir);
	void key_event();
};

#endif