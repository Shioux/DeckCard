#include "Pokemon.h"

Pokemon::Pokemon() {};
Pokemon::Pokemon(string name, int hp, typePokemon typePoke_selected):Card(name,POKEMON){
	this->hp = hp;
	this->typePokemon_selected = typePoke_selected;
	this->name = name;
}

void Pokemon::createAttack(string name, string description, int power) { 
	this->attackList.push_back(Attack(name,description,power));	
}


void Pokemon::display() {
	Card::dislay();
	cout << endl;
	cout <<"Pv du Pokemon : " << this->getHp() <<" ,Type du Pokemon : "<< this->getTypePokemon() << endl;
	for (int i = 0; i < this->getAttackList().size(); i++) {
		cout << "Attaque numero " << i+1 << " : " << endl;
		cout <<"Nom de l'attaque : " << this->getAttackList()[i].getName() << endl;
		cout <<"Description de l'attaque : " << this->getAttackList()[i].getDescription() << endl;
		cout <<"Puissance de l'attaque : " << this->getAttackList()[i].getPower() << endl;
		cout << endl;
	}
}