// BetterPlayerDataBase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "DataBase.h"
#include "Player.h"
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	DataBase playerList;

	char input;
	playerList.load();

	while (1)
	{
		int choice;
		cout << "\n\nPlayer Dev Menu";
		cout << "\n1: Make a profile";
		cout << "\n2: List all profiles";
		cout << "\n3: Search for existing profile";
		cout << "\n4: Save + load profiles";
		cout << "\n5: Quit";

		cout << "\n\nChoose Wisely (lol just kidding do whatever)\n";
		cin >> choice;
		system("cls");

		switch (choice)
		{
		case 1:

			cout << "\nGive the player profile a name..." << endl;
			char cName[30];
			cin >> cName;
			cout << "\nGive the player profile a score..." << endl;
			int cScore;
			cin >> cScore;
			playerList.Add(Player(cName, cScore));
			break;
		case 2:

			playerList.List();
			system("pause");
			break;

		case 3:

			playerList.Search();

		case 4:

			playerList.SavePlayerProfiles();
			playerList.load();
			break;

		case 5:

			exit(0);
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
