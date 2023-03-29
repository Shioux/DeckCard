#pragma once
#include <string>
#include"Card.h"
#include<vector>
#include "TypeMagic.h"
#include"Category.h"

class Magic : public Card
{
public:
	typeMagic typeMagic_selected; //le type que poss�de la carte parmi l'enum�ration de type de cartes Magic
	int hp; //point de vie de la carte
	int power; //puissancede la carte 
	//vector<SpellMagic> spells;
	Magic(); //constructeur oar d�faut
	Magic(string name, category c, typeMagic t, int hp, int power); 
};

