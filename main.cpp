#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include "Hero.h"
#include "Area.h"
using namespace std;

Area area;
Hero hero;

void intro()
{
	cout << "----------------------------------------" << endl;
	cout << "Welcome to the majestic world of Zyphel!" << endl;
	cout << "----------------------------------------" << endl;
	cout << "You are about to embark on an incredible" << endl;
	cout << "journey full of battles, mysteries, and " << endl;
	cout << "tough decisions. You have been selected " << endl;
	cout << "among various candidates to be accepted " << endl;
	cout << "into the land, as you have a great      " << endl;
	cout << "amount of potential to rise up and      " << endl;
	cout << "achieve great things.                   " << endl;
	cout << "----------------------------------------" << endl;
	cout << "Young traveler, what is your name?      " << endl;

	string name;

	bool validName = false;

	while (!validName)
	{
		validName = true;
		getline(cin, name);

		bool tooLong = name.length() >= 32;
		bool empty = name.length() == 0;

		if (tooLong || empty)
		{
			if (tooLong)
			{
				cout << "Traveler, that name is far too long!" << endl;
			}
			else if (empty)
			{
				cout << "Traveler, that name is empty!" << endl;
			}
			cout << "Enter another: " << endl;
			validName = false;
		}
	}

	cout << "----------------------------------------" << endl;
	cout << name << "--What a dashing name!          " << endl;
	cout << "----------------------------------------" << endl;
	cout << "Alas, I must force upon you your first  " << endl;
	cout << "big decision that you will make, as your" << endl;
	cout << "fate will be determined by this choice. " << endl;
	cout << "----------------------------------------" << endl;
	cout << "What kind of hero will you be?          " << endl;
	cout << "(1) Warrior                             " << endl;
	cout << "(2) Mage                                " << endl;
	cout << "(3) Assassin                            " << endl;
	cout << "(4) Archer                              " << endl;
	cout << "(5) Drunk                               " << endl;
	cout << "(6) Bard                                " << endl;
	cout << "(7) Peasant                             " << endl;
	cout << "Enter a number:                         " << endl;

	string classes[7] = { "Warrior", "Mage", "Assassin", "Archer", "Drunk", "Bard" };

	int selection;

	bool validSelection = false;

	while (!validSelection)
	{
		validSelection = true;
		cin >> selection;

		if (cin.fail() || selection < 1 || selection > 6)
		{
			cin.clear();
			cin.ignore();
			cout << "Invalid input received. Choose a number between 1 and 6." << endl;
			validSelection = false;
		}
	}

	string className = classes[selection - 1];

	cout << "----------------------------------------" << endl;
	cout << "Ah, you have elected to be a " << className << "." << endl;
	cout << "A great choice!                         " << endl;
	cout << "----------------------------------------" << endl;
	cout << "Prepare to begin your adventure...      " << endl;
	cout << "----------------------------------------" << endl;
}

int main()
{
	intro();
	while (true) 
	{
		
	}
}