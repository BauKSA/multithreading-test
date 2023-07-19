#pragma once
#ifndef _CHARACTER_H
#define _CHARACTER_H

struct Direction {
	int x_coord;
	int y_coord;
};

class Character {
protected:
	int x_pos;
	int y_pos;
	char body;
public:
	Character(int _x_pos = 0, int _y_pos = 0, char _body = 'X') :
		x_pos{ _x_pos }, y_pos{ _y_pos }, body{ _body }{}

	void draw();
	void clear();
	void move(Direction dir);
};

#endif