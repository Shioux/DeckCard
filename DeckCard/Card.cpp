#include "Card.h"
#include"Category.h"

Card::Card() {};

Card::Card(string nom, category c) {
	this->name = nom;
	this->category_selected = c;
};

string Card::getName() {
	return this->name;
}
