#pragma once
#include <string>
using namespace std;

class Spell
{
public:
	Spell();
	Spell(string name,string description);
protected:
	string name;
	string description;
};

