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

	srand((unsigned) time(NULL));

	return 1 + (rand() % 6); // 1 (offset) - 6 (range)

}

void printDice(int side) { // show ascii art of dice
	switch (side) {
	case 1:
		//std::cout << "One (test)\n";
		std::cout << "-------\n";
		std::cout << "|     |\n";
		std::cout << "|  #  |\n";
		std::cout << "|     |\n";
		std::cout << "-------\n";
		break;
	case 2:
		//std::cout << "Two (test)\n";
		std::cout << "-------\n";
		std::cout << "|   # |\n";
		std::cout << "|     |\n";
		std::cout << "| #   |\n";
		std::cout << "-------\n";
		break;
	case 3:
		//std::cout << "Three (test)\n";
		std::cout << "-------\n";
		std::cout << "|   # |\n";
		std::cout << "|  #  |\n";
		std::cout << "| #   |\n";
		std::cout << "-------\n";
		break;
	case 4:
		//std::cout << "Four (test)\n";
		std::cout << "-------\n";
		std::cout << "| # # |\n";
		std::cout << "|     |\n";
		std::cout << "| # # |\n";
		std::cout << "-------\n";
		break;
	case 5:
		//std::cout << "Five (test)\n";
		std::cout << "-------\n";
		std::cout << "| # # |\n";
		std::cout << "|  #  |\n";
		std::cout << "| # # |\n";
		std::cout << "-------\n";
		break;
	case 6:
		//std::cout << "Six (test)\n";
		std::cout << "-------\n";
		std::cout << "| # # |\n";
		std::cout << "| # # |\n";
		std::cout << "| # # |\n";
		std::cout << "-------\n";
		break;
	default:
		std::cout << "???\n";
		break;
	}
	
}