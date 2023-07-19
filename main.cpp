#include<iostream>
#include<vector>
#include<thread>

#include "character.h"
#include "player.h"
#include "enemy.h"

Direction dir_right = { 1, 0 };
Direction dir_left = { -1, 0 };
Direction dir_up = { 0, -1 };
Direction dir_down = { 0, 1 };

std::vector<Direction> enemy_pattern = {
	dir_right, dir_right, dir_right, dir_right, dir_right, dir_right, dir_right, dir_right, dir_right, dir_right,
	dir_right, dir_right, dir_right, dir_right, dir_right, dir_right, dir_right, dir_right, dir_right, dir_right,
	dir_right, dir_right, dir_right, dir_right, dir_right, dir_right, dir_right, dir_right, dir_right, dir_right,
	dir_down, dir_down, dir_down,
	dir_left, dir_left, dir_left, dir_left, dir_left, dir_left, dir_left, dir_left, dir_left,dir_left,
	dir_left, dir_left, dir_left, dir_left, dir_left, dir_left, dir_left, dir_left, dir_left,dir_left,
	dir_left, dir_left, dir_left, dir_left, dir_left, dir_left, dir_left, dir_left, dir_left,dir_left,
	dir_up, dir_up, dir_up
};

void enemy_tick() {
	Enemy* enemy = new Enemy(enemy_pattern, 20, 20, 'X');
	enemy->draw();
	enemy->move_pattern();
}

int main() {

	Player* player = new Player(15, 15, 'O');
	player->draw();

	std::thread enemy_thread(enemy_tick);

	player->key_event();


	return 0;
}