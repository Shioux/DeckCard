#pragma once
#include <string>
#include <iostream>
#include"Category.h"

using namespace std;

class Card
{
protected:
	string name;
public:
	category category_selected;
	Card();
	Card(string nom, category c);
	string getName();
};

