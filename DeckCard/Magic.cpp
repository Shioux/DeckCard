#include "Magic.h"
#include "TypeMagic.h"
#include"Category.h"

Magic::Magic(){}; //constructeur par défaut

Magic::Magic(string name, category c, typeMagic t, int hp, int power) : Card(name, c) {
	this->typeMagic_selected = t;
	this->hp = hp;
	this->power = power;
};