#pragma once
#include"Card.h"
#include "Attack.h"
#include "TypePokemon.h"
#include<vector>

class Pokemon : public Card
{
public:
	
	Pokemon();
	Pokemon(string name,int hp, typePokemon typeP); 
	int getHp() { return this->hp; };
	typePokemon getTypePokemon() { return this->typePokemon_selected;};
	vector<Attack>getAttackList() { return this->attackList; };
	void display();
	void createAttack(string name, string description, int power);

protected :

	int hp;
	vector<Attack> attackList;
	typePokemon typePokemon_selected;
};

