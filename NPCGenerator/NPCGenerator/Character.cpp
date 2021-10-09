#include "Character.h"

//Default constructor
Character::Character()
{
}

//Method's definition for character's name creator
//Setter for Character's first name
void Character::setFName(string fName)
{
	this->fName = fName;
}

//Getter for Character's first name
string Character::getFName()
{
	return this->fName;
}

//Setter for Character's last name
void Character::setLName(string lName)
{
	this->lName = lName;
}

//Getter for Character's last name
string Character::getLName()
{
	return this->lName;
}

void Character::printFullName()
{
	cout << getFName() << " " << getLName() << endl;
}

//This will generate a random race for the NPC generator
void Character::raceGenerator()
{
	const string playableRace[9] = { "Dwarf", "Elf", "Human", "Gnome", "Dragonborn",
	"Half-Elf", "Halfling", "Half-Orc", "Tiefling" };
	
	int raceNum;

	raceNum = (rand() % 9); // 0-8.
	
	//Displays random race.
	cout << "Race: " << playableRace[raceNum] << " | ";

	//Switch code for race generator.
	/*
	switch (raceNum){
		case 0: 
			{setRace("Dwarf"); }
			break;
		case 1:
			{setRace("Elf"); }
			break;
		case 2:
			{setRace("Human"); }
			break;
		case 3:
			{setRace("Gnome"); }
			break;
		case 4:
			{setRace("Dragonborn"); }
			break;
		case 5:
			{setRace("Half-Elf"); }
			break;
		case 6:
			{setRace("Halfling"); }
			break;
		case 7:
			{setRace("Half-Orc"); }
			break;
		case 8:
			{setRace("Tiefling"); }
			break;
		default:
			cout << "This should never be triggered.";
	} */
}

//getRace() was created to be used in the switch function.
/*void Character::printRace()
{
	cout << "Race: " << getRace() << " | ";
}*/

void Character::setGender(string playableGender)
{
	this->playableGender = playableGender;
}

string Character::getGender()
{
	return this->playableGender;
}

void Character::genderGenerator()
{
	int genderRand = rand();
	int genderNum;

	genderNum = genderRand % 2;

	if (genderNum == 0) { setGender("Male"); }
	else { setGender("Female"); }
}

void Character::printGender()
{
	cout << " Gender: " << getGender() << " | ";
}

void Character::setPlayClass(string playableClass)
{
	this->playableClass = playableClass;
}

string Character::getPlayClass()
{
	return this->playableClass;
}

void Character::playClassGen()
{
	int classRandom = rand();
	int classNum;

	classNum = classRandom % 14;

	switch (classNum)
	{
	case 0:
	{ setPlayClass("Barbarian"); }
	break;
	case 1:
	{ setPlayClass("Bard"); }
	break;
	case 2:
	{ setPlayClass("Cleric"); }
	break;
	case 3:
	{ setPlayClass("Druid"); }
	break;
	case 4:
	{ setPlayClass("Fighter"); }
	break;
	case 5:
	{ setPlayClass("Monk"); }
	break;
	case 6:
	{ setPlayClass("Paladin"); }
	break;
	case 7:
	{ setPlayClass("Ranger"); }
	break;
	case 8:
	{ setPlayClass("Rogue"); }
	break;
	case 9:
	{ setPlayClass("Sorcerer"); }
	break;
	case 10:
	{ setPlayClass("Warlock"); }
	break;
	case 11:
	{ setPlayClass("Wizard"); }
	break;
	case 12:
	{ setPlayClass("Artificer"); }
	break;
	case 13:
	{ setPlayClass("Blood Hunter"); }
	break;
	default:
		cout << "This should not be triggered.";
	}
}

void Character::printPlayClass()
{
	cout << "Class: " << getPlayClass() << " |" << endl;
}

void Character::setStr(int modStr)
{
	this->modStr = modStr;
}

int Character::getStr()
{
	return this->modStr;
}

void Character::setDex(int modDex)
{
	this->modDex = modDex;
}

int Character::getDex()
{
	return this->modDex;
}

void Character::setCon(int modCon)
{
	this->modCon = modCon;
}

int Character::getCon()
{
	return this->modCon;
}

void Character::setInt(int modInt)
{
	this->modInt = modInt;
}

int Character::getInt()
{
	return this->modInt;
}

void Character::setWis(int modWis)
{
	this->modWis = modWis;
}

int Character::getWis()
{
	return this->modWis;
}

void Character::setCha(int modCha)
{
	this->modCha = modCha;
}

int Character::getCha()
{
	return this->modCha;
}

void Character::setStats(int stats)
{
	this->stats = stats;
}

int Character::getStats()
{
	return this->stats;
}

void Character::printRandStats()
{
	int i;
	int strRandom = rand();
	int dexRandom = rand();
	int conRandom = rand();
	int intRandom = rand();
	int wisRandom = rand();
	int chaRandom = rand();

	//setStr((strRandom % 13) + 6); //Random number between 6-18
	if (Character::playableClass == "Barbarian")
	{
		setStr((strRandom % 13) + 9);
	}
	else
	{
		setStr((strRandom % 13) + 6);
	}
	setDex((dexRandom % 13) + 6); //Random number between 6-18
	setCon((conRandom % 13) + 6); //Random number between 6-18
	setInt((intRandom % 13) + 6); //Random number between 6-18
	setWis((wisRandom % 13) + 6); //Random number between 6-18
	setCha((chaRandom % 13) + 6); //Random number between 6-18

	cout << "\nSTR: " << getStr() << endl;
	cout << "DEX: " << getDex() << endl;
	cout << "CON: " << getCon() << endl;
	cout << "INT: " << getInt() << endl;
	cout << "WIS: " << getWis() << endl;
	cout << "CHA: " << getCha() << endl;

	/*
	I wanted to make variables private and call on a rand number but 
	this method did not work.

	int getRandNum = rand();
	int getResults = (getRandNum % 13) + 6; //Random number between 6-18.
	void setStats(int getResults);

	cout << "\nSTR: " << getStats() << endl;
	cout << "DEX: " << getResults << endl;
	cout << "CON: " << getResults << endl;
	cout << "INT: " << getResults << endl;
	cout << "WIS: " << getResults << endl;
	cout << "CHA: " << getResults << endl; */
}


