#pragma once
#include <string>
#include"Card.h"
#include<vector>
#include "TypeMagic.h"
#include"Category.h"

class Magic : public Card
{
public:
	typeMagic typeMagic_selected; //le type que possède la carte parmi l'enumération de type de cartes Magic
	int hp; //point de vie de la carte
	int power; //puissancede la carte 
	//vector<SpellMagic> spells;
	Magic(); //constructeur oar défaut
	Magic(string name, category c, typeMagic t, int hp, int power); 
};

