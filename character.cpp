#include<iostream>

#include "character.h"
#include "functions.h"

void Character::draw() {
	gotoxy(x_pos, y_pos);
	std::cout << body;
}

void Character::clear() {
	gotoxy(x_pos, y_pos);
	std::cout << " ";
}

void Character::move(Direction dir) {
	clear();
	x_pos += dir.x_coord;
	y_pos += dir.y_coord;
	draw();
}