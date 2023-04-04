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
	Magic(); //constructeur par défaut
	Magic(string name, typeMagic t, int hp, int power);
	void display(); //afficher
	void createSpell(string name, string description);
protected:
	typeMagic typeMagic_selected; //le type que possède la carte parmi l'enumération de type de cartes Magic
	int hp; //point de vie de la carte
	int power; //puissancede la carte 
	vector<Spell*> spells; //liste des spells (attack) des cartes magic
};
