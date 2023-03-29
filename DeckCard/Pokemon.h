#pragma once
#include"Card.h"
#include "Attack.h"
#include<vector>

class Pokemon : public Card
{
public:
	enum typePokemon {
		NORMAL, GRASS, FIRE, WATER, ELECTRIC, ICE, FIGHTING,POISON, GROUND, FLYING, PSYCHIC, BUG, ROCK, GHOST, DARK, DRAGON, STEEL, FAIRY
	};
	Pokemon();
	Pokemon(string name,int hp, typePokemon typeP, vector<Attack> attackL); 
	int getHp() { return this->hp; };
	typePokemon getTypePokemon() { return this->typePokemon_selected;};
	vector<Attack>getAttackList() { return this->attackList; };
	string showAttackList();

protected :

	int hp;
	vector<Attack> attackList;
	typePokemon typePokemon_selected;
};

