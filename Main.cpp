#include <iostream>
#include <random>

int randomNumber();
void printDice(int side);

int main() {

	while (true) {
		std::cout << "\nDo you want to roll the dice? (y/n) ";
		char choice{};
		std::cin >> choice;
		if (choice == 'n')
			break;

		printDice(randomNumber());
	}

	return 0;
}


int randomNumber() {

	srand(time(0));

	return rand() % 8;

}

void printDice(int side) { // show ascii art of die
	switch (side) {
	case 1:
		std::cout << "One (test)";
		break;
	case 2:
		std::cout << "Two (test)";
		break;
	case 3:
		std::cout << "Three (test)";
		break;
	case 4:
		std::cout << "Four (test)";
		break;
	case 5:
		std::cout << "Five (test)";
		break;
	case 6:
		std::cout << "Six (test)";
		break;
	case 7:
		std::cout << "Seven (test)";
		break;
	case 8:
		std::cout << "Eight (test)";
		break;
	case 9:
		std::cout << "Nine (test)";
		break;
	default:
		std::cout << "???";
		break;
	}
	
}