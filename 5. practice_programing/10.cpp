#include <iostream>

int main() {
	int count, i, j;
	std::cout << "출력할 행 수를 입력하십시오: ";
	std::cin >> count;

	for (i = 0; i < count; i++) {
		for (j = 1; j < count - i; j++)
			std::cout << ".";
		for (j = 0; j <= i; j++)
			std::cout << "*";
		std::cout << "\n";
	}
}
