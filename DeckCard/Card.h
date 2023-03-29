#pragma once
#include <string>
using namespace std;

class Card
{
protected:
	string name;
public:
	enum category
	{
		Pokemon = 0,
		Magic = 1
	};
	Card();
	Card(string nom, category c);
	string getName();
};

