#include"Card.h"
#include "Pokemon.h"



int main() {

	Card test("test1",Card::POKEMON);
	test.dislay();
	

	Pokemon pokemon1("Pikachu", 80, ELECTRIC);
	pokemon1.createAttack("Eclair", "Envoie un eclair sur l'ennemi", 90);
	pokemon1.createAttack("Fatal-foudre", "Envoie un puissant eclaire sur l'ennemi", 110);
	pokemon1.display();


};