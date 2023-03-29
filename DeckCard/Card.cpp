#include "Card.h"

Card::Card() {};

Card::Card(string nom, category c) {
	this->name = nom;
	if (c == Pokemon) {
		this->Pokemon;
	}
	else {
		this->Magic;
	}
};

string Card::getName() {
	return this->name;
}
