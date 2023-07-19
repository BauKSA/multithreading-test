#include<conio.h>
#include<iostream>

#include "player.h"
#include "character.h"
#include "functions.h"

#define RIGHT 77
#define LEFT 75
#define UP 72
#define DOWN 80
#define ESC 27

Direction _dir_right = { 1, 0 };
Direction _dir_left = { -1, 0 };
Direction _dir_up = { 0, -1 };
Direction _dir_down = { 0, 1 };

void Player::check_collision(Direction dir) {
	
}

void Player::key_event() {
	while (in_game) {
		if (_kbhit()) {
			const int key = _getch();
			switch (key) {
			case RIGHT:
				move(_dir_right);
				break;
			case LEFT:
				move(_dir_left);
				break;
			case UP:
				move(_dir_up);
				break;
			case DOWN:
				move(_dir_down);
				break;
			case ESC:
				in_game = false;
				break;
			default:
				gotoxy(0, 0);
				std::cout << "   ";
				gotoxy(0, 0);
				std::cout << key;
				break;
			}
		}
	}
}