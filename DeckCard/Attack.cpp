#include "Attack.h"

Attack::Attack(){};
Attack::Attack(string name, string desc, int power) {
	this->name = name;
	this->description = desc;
	this->power = power;
};
