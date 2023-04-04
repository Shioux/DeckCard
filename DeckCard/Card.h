#pragma once
#include <string>
#include <iostream>
using namespace std;

class Card
{

public:
	enum category { POKEMON, MAGIC };
	Card();
	Card(string nom, category c);
	string getName() { return this->name; };
	void dislay();

protected:

	string name;
	category category_selected;
};


