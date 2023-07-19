#pragma once
#include<vector>

#include "character.h"

#ifndef _ENEMY_
#define _ENEMY_
class Enemy : public Character {
private:
	bool in_game;
	std::vector<Direction> pattern;
public:
	Enemy(std::vector<Direction> _pattern, int _x_pos = 0, int _y_pos = 0, char _body = '■') :
		Character(_x_pos, _y_pos, _body) {
		in_game = true;
		pattern = _pattern;
	}

	void move_pattern();
};

#endif