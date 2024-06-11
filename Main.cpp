#include <iostream>
#include <random>

int randomNumber();

int main() {

	while (true) {
		std::cout << "\nDo you want to roll the dice? (y/n) ";
		char choice{};
		std::cin >> choice;
		if (choice == 'n')
			break;

		std::cout << randomNumber();
	}

	return 0;
}


int randomNumber() {

	srand(time(0));

	return rand() % 8;

}