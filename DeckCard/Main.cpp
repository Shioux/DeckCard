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