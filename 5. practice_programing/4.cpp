#include <iostream>
const unsigned int a_principal = 100000;
const unsigned int b_principal = 100000;
const double a_rate = 0.1;
const double b_rate = 0.05;
int main() {
	unsigned int a_value = a_principal;
	unsigned int b_value = b_principal;
	int year = 1;
	for (year; a_value >= b_value; year++) {
		a_value += a_principal * a_rate;
		b_value += b_value * b_rate;
		std::cout << year << "년 후\t" << a_value << "\t" << b_value << std::endl;
	}
	--year;
	std::cout << "\n";
	std::cout << year << "년 후 고객 B의 투자 가치가 고객 A의 투자 가치를 초과한다.\n";
	std::cout << year << "년 후 고객 A의 투자 가치 : " << a_value << "\n";
	std::cout << year << "년 후 고객 B의 투자 가치 : " << b_value << "\n";

	return 0;

}
