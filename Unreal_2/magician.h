// magician.h

#pragma once
#include "player.h"
#include <iostream>

class Magician : public Player {
public:
	Magician(std::string nickname) : Player(nickname) {
		job_name = "마법사";
		HP = 80;
		MP = 200;
	}
	void attack() override {
		std::cout << "마법사: 강력한 화염 마법 화살을 쏩니다!" << std::endl;
	}
};