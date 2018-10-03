#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
	cout << "----------------------------------------" << endl;
	cout << "Welcome to the majestic world of Zyphel!" << endl;
	cout << "----------------------------------------" << endl;
	cout << "You are about to embark on an incredible" << endl;
	cout << "journey full of battles, mysteries, and " << endl;
	cout << "tough decisions. You have been selected " << endl;
	cout << "among various candidates to be accepted " << endl;
	cout << "into the land, as you are hard-working, " << endl;
	cout << "smart, and have great potential.        " << endl;
	cout << "----------------------------------------" << endl;
	cout << "Alas, I must force upon you your first  " << endl;
	cout << "big decision that you will make, as your" << endl;
	cout << "fate will be determined by this choice. " << endl;
	cout << "----------------------------------------" << endl;
	cout << "What kind of hero will you be?          " << endl;
	cout << "(1) Warrior                             " << endl;
	cout << "(2) Assassin                            " << endl;
	cout << "(3) Mage                                " << endl;
	cout << "(4) Archer                              " << endl;
	cout << "(5) Drunk                               " << endl;

	string classes[5] = { "Warrior", "Assassin", "Mage", "Archer", "Drunk" };

	int selection;

	bool valid = false;

	while (!valid)
	{
		valid = true; 
		cin >> selection;

		if (cin.fail() || selection < 1 || selection > 5) 
		{
			cin.clear();
			cin.ignore(); 
			cout << "Invalid input received. Choose a number between 1 and 5." << endl;
			valid = false; 
		}
	}

	string className = classes[selection-1];

	cout << "----------------------------------------" << endl;
	cout << "Ah, you have elected to be a " << className << "." << endl;
	cout << "A great choice!                         " << endl;
}