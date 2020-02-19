#pragma once
#include <string>
class Player
{
public:
	Player();
	~Player();

	Player(const char name[30], int score);

	char* getName();
	int getScore();

	void setName(const char name[30]);
	void setScore(int score);

	char _Name[30];
	int _Score;

	void save(std::ofstream& out);
	bool load(std::ifstream& in);
};