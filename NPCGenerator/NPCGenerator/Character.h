#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

class Character{
private:
	string fName; //Variable for Last Name
	string lName;	//Variable for Last Name
	const string playableRace[9]; //Array for Race
	string playableClass; //Variable for Player Class
	string playableGender; //Variable for Gender
	//Variables for Attributes: att = attribute
	int stats; 
	int modStr; //Strength
	int modDex; //Dexterity
	int modCon; //Constitution
	int modInt; //Intelligence
	int modWis; //Wisdom
	int modCha; //Charisma

public:
	//Constructor
	Character();

	//Name
	void setFName(string fName);
	string getFName();
	void setLName(string lName);
	string getLName();
	void printFullName();

	//Race
	void raceGenerator();

	//Gender
	void setGender(string playableGender);
	string getGender();
	void genderGenerator();
	void printGender();

	//Player Class
	void setPlayClass(string playableClass);
	string getPlayClass();
	void playClassGen();
	void printPlayClass();

	//Attributes
	void setStr(int modStr);
	int getStr();
	void setDex(int modDex);
	int getDex();
	void setCon(int modCon);
	int getCon();
	void setInt(int modInt);
	int getInt();
	void setWis(int modWis);
	int getWis();
	void setCha(int modCha);
	int getCha();
	void setStats(int stats);
	int getStats();
	void printRandStats();
};

