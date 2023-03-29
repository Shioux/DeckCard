#include "Pokemon.h"

Pokemon::Pokemon() {};
Pokemon::Pokemon(string name, int hp, typePokemon typePoke_selected, vector<Attack> attackL):Card(name,POKEMON){
	this->hp = hp;
	this->attackList = attackL;
	this->typePokemon_selected = typePoke_selected;
	this->name = name;
}

string Pokemon::showAttackList() {
	string list = "";
	for (int i = 0; i < this->getAttackList().size(); i++) {
		list = list + this->getAttackList()[i].getName() + '\n';
		list = list + this->getAttackList()[i].getDescription() + '\n';
		list =  this->getAttackList()[i].getPower() + '\n';

	}
	return list;
}