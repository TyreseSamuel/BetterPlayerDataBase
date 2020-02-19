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
		cout << "\n\n=============== PLAYER MODIFY MENU V3 ===================";
		cout << "\n1: Create a player profile.";
		cout << "\n2: show all player profiles created.";
		cout << "\n3: Search for a player profile.";
		cout << "\n4: Save and load the player profiles.";
		cout << "\n5: Exit from program.";

		cout << "\n\nEnter your choice...!\n";
		cin >> choice;
		system("cls");//clearing the console

		switch (choice)
		{
		case 1: //Create a player profile.

			cout << "\nGive the player profile a name..." << endl;
			char cName[30];
			cin >> cName;
			cout << "\nGive the player profile a score..." << endl;
			int cScore;
			cin >> cScore;
			playerList.Add(Player(cName, cScore));
			break;
		case 2: //show all player profiles created.

			playerList.List();
			system("pause");
			break;

		case 3: //Search for a player profile.

			playerList.Search();

		case 4: //Save the player profiles.

			playerList.SavePlayerProfiles();
			playerList.load();
			break;

		case 5: //Exit from program.

			exit(0);
		}//end of switch



	}//end of the while loop

}//end of main