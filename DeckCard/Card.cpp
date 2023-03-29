#include "Card.h"

Card::Card() {};

Card::Card(string nom, category c) {
	this->name = nom;
	this->category_selected = c;
};


