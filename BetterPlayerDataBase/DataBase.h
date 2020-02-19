#pragma once
#include "Player.h"
class DataBase
{
public:
	DataBase();
	~DataBase();

	void Add(Player newProfile);

	void Sort();

	void List();

	void Search();

	void SavePlayerProfiles();

	bool load();

	Player getPlayer(int i);
	int getLength();




	int BinarySearch(char  name[30]);



	Player* PlayerProfileList;

	int _arrayLength = 1;


};