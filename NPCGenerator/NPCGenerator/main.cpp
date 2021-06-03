#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "Character.h"

using namespace std;

char answer;
int genCount = 1;

void menuDisplay();
void NPCGenerator();
void doContinue();

int main()
{
	//Seeds the random number generator to current time/date:
	srand(static_cast<unsigned int>(time(0)));

	menuDisplay();

	NPCGenerator();
	
	return 0;
}

//Switch Menu
void menuDisplay()
{
	//INITIAL GENERATOR NOTICE:
	cout << "\nNPC Generator" << endl;
	cout << "A simplified way to generate a non-player character" << endl;

}

//NPC Generator
void NPCGenerator()
{
	//Create New Character Y/N:
		string firstName;
		string lastName;

		Character NPC;

		NPC.printFullName();

		//Character name: User inputs first and last name
		cout << "\nEnter the character's first name: " << endl;
		cin >> firstName;
		NPC.setFName(firstName);

		cout << "\nEnter the character's last name: " << endl;
		cin >> lastName;
		NPC.setLName(lastName);

		//Character Information
		cout << "\n\n=== CHARACTER: #" << genCount << " ===" << endl;

		cout << "\nCharacter's name: ";
		NPC.printFullName();

		//Race | Gender | Class |
		NPC.raceGenerator();

		NPC.genderGenerator();
		NPC.printGender();

		NPC.playClassGen();
		NPC.printPlayClass();

		//Stats
		NPC.printRandStats();

		//Recurives function: Would you like to continue?
		doContinue();
}

//Recursive method: Would you like to continue?
void doContinue()
{
	do
	{
		cout << "\n\n Would you like to generate another character? ('y' or 'n')"
			<< "\n'y' for yes and 'n' for no." << endl;

		cin >> answer;

		if (answer == 'y' || answer == 'Y')
		{
			cout << endl;
			genCount++;
			NPCGenerator();
		}
		else if (answer == 'n' || answer == 'N')
		{
			break;
		}
		else
		{
			cout << "\n'" << answer << "'" << " is not a valid answer.\n"
				<< "Please enter 'y' for Yes or 'n' for No";
			doContinue();
		}
	} 	while (answer != 'n' && answer != 'N');
}
