#pragma once
#include <iostream>
#include <string>
using namespace std;
class Attack
{
protected:
	string name;
	string description;
	int power;

public :
	Attack();
	Attack(string name, string desc, int power);
	string getName() { return this->name;};
	string getDescription() { return this->description; };
	int getPower() { return this->power; };
};

