#include"Card.h"
#include <iostream>

int main() {

	Card* test = new Card("test1", (Card::category)1);

	cout << test->getName() << endl;

}