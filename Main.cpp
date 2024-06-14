#include <windows.h>
#include <iostream>
#include <random>
#include <cstdlib>
#include <time.h>

int randomNumber();
void printDice(int side);

int main() {
	srand((unsigned)time(NULL)); 

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

	return 1 + (rand() % 6); // 1 (offset) - 6 (range)
}

void printDice(int side) { // show ascii art of dice // \u25CF
	SetConsoleOutputCP(CP_UTF8);
	switch (side) {
	case 1:
		
		std::cout << "-------\n";
		std::cout << "|     |\n";
		std::cout << "|  ●  |\n";
		std::cout << "|     |\n";
		std::cout << "-------\n";
		
		break;
	case 2:
		std::cout << "-------\n";
		std::cout << "|   ● |\n";
		std::cout << "|     |\n";
		std::cout << "| ●   |\n";
		std::cout << "-------\n";
		break;
	case 3:
		std::cout << "-------\n";
		std::cout << "|   ● |\n";
		std::cout << "|  ●  |\n";
		std::cout << "| ●   |\n";
		std::cout << "-------\n";
		break;
	case 4:
		std::cout << "-------\n";
		std::cout << "| ● ● |\n";
		std::cout << "|     |\n";
		std::cout << "| ● ● |\n";
		std::cout << "-------\n";
		break;
	case 5:
		std::cout << "-------\n";
		std::cout << "| ● ● |\n";
		std::cout << "|  ●  |\n";
		std::cout << "| ● ● |\n";
		std::cout << "-------\n";
		break;
	case 6:
		std::cout << "-------\n";
		std::cout << "| ● ● |\n";
		std::cout << "| ● ● |\n";
		std::cout << "| ● ● |\n";
		std::cout << "-------\n";
		break;
	default:
		std::cout << "???\n";
		break;
	}
	
}