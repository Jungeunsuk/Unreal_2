// player.cpp

#include "Player.h"
#include <iostream>

// 생성자: 닉네임을 받고 기본 레벨을 1로 세팅합니다.
Player::Player(std::string nickname) {
	this->nickname = nickname;
	this->level = 1;
}

// 상태창 출력 함수
void Player::printPlayerStatus() {
	std::cout << " \n==========================" << std::endl;
	std::cout << "[" << nickname << "님의 상태창]" << std::endl;
	std::cout << "직업 " << job_name << std::endl;
	std::cout << "레벨: " << level << std::endl;
	std::cout << "HP: " << HP << "/ MP: " << MP << std::endl;
	std::cout << "==========================" << std::endl;
}

// Getter &setter 구현
std::string Player::getJobName() { return job_name; }
std::string Player::getNickname() { return nickname; }
int Player::getLevel() { return level; }
int Player::getHP() { return HP; }
int Player::getMP() { return MP; }
int Player::getPower() { return power; }
int Player::getDefence() { return defence; }
int Player::getAccuracy() { return accuracy; }
int Player::getSpeed() { return speed; }

void Player::setNickname(std::string nickname) { this->nickname = nickname; }
void Player::setHP(int HP) { this->HP = HP; }
void Player::setMP(int MP) { this->MP = MP; }
void Player::setPower(int power) { this->power = power; }
void Player::setDefence(int defence) { this->defence = defence; }
void Player::setAccuracy(int accuracy) { this->accuracy = accuracy; }
void Player::setSpeed(int speed) { this->speed = speed; }