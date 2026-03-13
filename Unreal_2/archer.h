// archer.h

#pragma once
#include "player.h"
#include <iostream>

class Archer : public Player {
public:
	Archer(std::string nickname) : Player(nickname) {
		job_name = "궁수";
		HP = 100;
		MP = 100;
	}
	void attack() override {
		std::cout << "궁수: 바람을 가르는 예리한 화살을 발사합니다!" << std::endl;
	}
};