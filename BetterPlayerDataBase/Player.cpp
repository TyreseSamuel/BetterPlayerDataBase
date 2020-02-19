#include "pch.h"
#include "Player.h"
#include <iostream>
#include <fstream>
#include <string>

Player::Player()
{
	strcpy_s(_Name, "Player");
	_Score = 0;
}

Player::Player(const char name[30], int score)
{
	strcpy_s(_Name, name);
	_Score = score;
}

Player::~Player()
{

}
char* Player::getName()
{
	return _Name;
}
int Player::getScore()
{
	return _Score;
}

void Player::setName(const char name[30])
{
	strcpy_s(_Name, name);
}
void Player::setScore(const int score)
{
	_Score = score;
}

void Player::save(std::ofstream& out)
{
	if (!out.is_open())
		return;
	out.write(_Name, 30);
	out.write((char*)& _Score, sizeof(int));

}
bool Player::load(std::ifstream& in)
{
	if (!in.is_open())return false;

	in.read(_Name, 30);

	if (in.rdstate()) return false;
	in.read((char*)& _Score, sizeof(int));

	if (in.rdstate()) return false;


	return true;
}