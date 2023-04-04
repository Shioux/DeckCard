#include "Magic.h"
#include "TypeMagic.h"
#include"Category.h"

Magic::Magic(){}; //constructeur par défaut

Magic::Magic(string name, typeMagic t, int hp, int power) : Card(name, (category)0) {
	this->typeMagic_selected = t;
	this->hp = hp;
	this->power = power;
};

void Magic::display() {
	cout << "Category :" << category_selected << endl;
	cout << "Name :" << name << endl;
	cout << "HP :" << hp << endl;
	cout << "Power :" << power << endl;
	cout << "Type :" << typeMagic_selected << endl;
}

void Magic::createSpell(string name, string description) {
	Spell* spell;
	try
	{
		spell = new Spell(name, description);
	}
	catch (const std::exception&)
	{
		cout << "CreateSpell failed \n";
		cout << "Create with name : " << name << " and description : " << description;
	}
	spells.push_back(spell);
}