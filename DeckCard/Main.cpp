<<<<<<< HEAD
#include"Magic.h"
#include"TypeMagic.h"
#include"Category.h"

int main() {

	Card* testC = new Card("test1", (category)1);

	cout << "testC : " << testC->getName() << endl << endl;
	
	Magic* testM = new Magic("testM",BLANC,100,50);

	cout << "testM : " << testM->getName() << endl << testM->category_selected << endl << endl;

	testM->display();
}
=======
#include"Card.h"
#include "Pokemon.h"
#include "Test.h"



int main() {

	/*
	Pokemon pokemon1("Pikachu", 80, ELECTRIC);
	pokemon1.createAttack("Eclair", "Envoie un eclair sur l'ennemi", 90);
	pokemon1.createAttack("Fatal-foudre", "Envoie un puissant eclaire sur l'ennemi", 110);
	pokemon1.display();

	*/

	Test test;
	test.cardTest();
	test.pokemonTest();
	
};
>>>>>>> ft/classPokemon
