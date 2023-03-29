#include"Card.h"
#include "Pokemon.h"


int main() {

	Card test("test1",Card::POKEMON);
	cout << test.getName() << endl;
	Attack attaque1("Eclaire", "Envoie un éclaire", 90);
	Attack attaque2("Fatal-foudre", "Envoie un puissant éclaire", 110);
	vector<Attack> attackListPikachu;
	attackListPikachu.push_back(attaque1);
	attackListPikachu.push_back(attaque2);
	Pokemon pokemon1("Pikachu", 80, Pokemon::ELECTRIC, attackListPikachu);
	cout << pokemon1.getName() << endl;
	cout << pokemon1.getHp() << endl;
	cout << pokemon1.getTypePokemon() << endl;
	for (int i = 0; i < pokemon1.getAttackList().size(); i++) {
		cout << pokemon1.getAttackList()[i].getName()<< endl;
		cout << pokemon1.getAttackList()[i].getDescription() << endl;
		cout << pokemon1.getAttackList()[i].getPower() << endl;
		cout << endl;
	}
	
}