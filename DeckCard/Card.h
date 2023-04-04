#pragma once
#include <string>
#include <iostream>
<<<<<<< HEAD
#include"Category.h"

=======
>>>>>>> ft/classPokemon
using namespace std;

class Card
{

public:
<<<<<<< HEAD
	category category_selected;
=======
	enum category { POKEMON, MAGIC };
>>>>>>> ft/classPokemon
	Card();
	Card(string nom, category c);
	string getName() { return this->name; };
	void dislay();

protected:

	string name;
	category category_selected;
};


