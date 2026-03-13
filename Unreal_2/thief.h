// thief.h

#pragma once
#include "player.h"
#include <iostream>

class Thief : public Player {
public:
	Thief(std::string nickname) : Player(nickname) {
		job_name = "도적";
		HP = 120;
		MP - 80;
	}
	void attack() override {
		std::cout << "도적: 보이지 않는 속도로 단검을 연속해서 찌릅니다" << std::endl;
	}
};