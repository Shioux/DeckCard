#pragma once
#include <string>
#include"Card.h"
#include<vector>
#include "TypeMagic.h"
#include"Category.h"
#include "Spell.h"

class Magic : public Card
{
public:
	Magic(); //constructeur par d�faut
	Magic(string name, typeMagic t, int hp, int power);
	void display(); //afficher
	void createSpell(string name, string description);
protected:
	typeMagic typeMagic_selected; //le type que poss�de la carte parmi l'enum�ration de type de cartes Magic
	int hp; //point de vie de la carte
	int power; //puissancede la carte 
	vector<Spell*> spells; //liste des spells (attack) des cartes magic
};
