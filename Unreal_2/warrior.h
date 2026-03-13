// warrior.h

#pragma once
#include "player.h"
#include <iostream>

class Warrior : public Player {
public:
	Warrior(std::string nickname) : Player(nickname) {
		job_name = "전사";
		HP = 200;
		MP = 50;
	}
	void attack() override {
		std::cout << "전사: 묵직한 대검을 크게 휘두릅니다!" << std::endl;
	}
};