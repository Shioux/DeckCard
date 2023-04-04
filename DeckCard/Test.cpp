#include "Test.h"

void Test::cardTest() {
	Card test("test1", Card::POKEMON);
	if (!empty(test.getName())) {
		cout << "Test nom de la carte valide " << endl;
	}
	else {
		cout << "Test nom de la carte echoue, chaine vide " << endl;
	}
}

void Test::pokemonTest() {

	Pokemon pokemon1("Pikachu", -1, ELECTRIC);
	if (!empty(pokemon1.getName())) {
		cout << "Test Nom du pokemon valide " << endl;
	}
	else {
		cout << "Test Nom du pokemon echoue, chaine vide " << endl;
	}
	if (pokemon1.getHp() != (int)pokemon1.getHp()) {
		cout << "Test Hp du pokemon echoue, la valeur n'est pas un int " << endl;
	}
	else if (pokemon1.getHp() < 0 || pokemon1.getHp() > 999) {
		cout << "Test Hp du pokemon echoue, la valeur n'est pas conmpris entre 0 et 999 " << endl;
	}
	else {
		cout << "Test Hp du pokemon valide " << endl;
	}
	if ((pokemon1.getTypePokemon())>= 1 && (pokemon1.getTypePokemon()) <= 18) {
		cout << "Test Type du pokemon valide " << endl;
	}
	else {
		cout << "Test Type du pokemon echoue " << endl;
	}
}
