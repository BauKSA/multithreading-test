#include<Windows.h>

#include "enemy.h"
#include "character.h"
#include "functions.h"

void Enemy::move_pattern() {
	while (in_game) {
		for (int i = 0; i < pattern.size(); i++) {
			move(pattern.at(i));
			Sleep(100);
		}
	}
}