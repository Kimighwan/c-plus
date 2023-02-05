#include <iostream>
int main() {
	std::cout << "수를 입력하시오: ";
	int a;
	int sum = 0;
	std::cin >> a;
	while (a != 0) {
		sum += a;
		std::cin >> a;
	}
	std::cout << "입력한 수들의 누계 = " << sum;
}
