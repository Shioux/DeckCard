#include "Test.h"

void Test::cardTest() {
	Card test("", Card::POKEMON);
	if (!empty(test.getName())) {
		cout << "Test nom de la carte valide " << endl;
	}
	else {
		cout << "Test nom de la carte echoue " << endl;
	}
}

void Test::pokemonTest() {

	Pokemon pokemon1("", 80, ELECTRIC);
	if (!empty(pokemon1.getName())) {
		cout << "Test Nom du pokemon valide " << endl;
	}
	else {
		cout << "Test Nom du pokemon echoue " << endl;
	}
	if (isdigit(pokemon1.getHp())) {
		cout << "Test Hp du pokemon valide " << endl;
	}
	else {
		cout << "Test Hp du pokemon echoue " << endl;
	}
	if ((pokemon1.getTypePokemon())>= 1 && (pokemon1.getTypePokemon()) <= 18) {
		cout << "Test Type du pokemon valide " << endl;
	}
	else {
		cout << "Test Type du pokemon echoue " << endl;
	}
}
