#include <iostream>
const int MAX = 10;
int main() {
	double donation[MAX];
	std::cout << "기부금을 입력하시오.\n(끝내려면 문자를 입력)\n기부금 #1: ";
	int i = 0;
	while (i<MAX && std::cin >> donation[i]) {
		if(++i < MAX)
			std::cout << "기부금 #" << i + 1 << ": ";
	}
	double total =0.0;
	double avg = 0.0;
	int big_donation = 0;

	for (int j = 0; j < i; j++)
		total += donation[j];
	if (i == 0)
		std::cout << "기부금이 없습니다.\n";
	else {
		avg = total / i;
		std::cout << "평균 기부액은 " << avg << "입니다.\n";
		for (int j = 0; j < i; j++) {
			if (donation[j] > avg)
				big_donation++;
		}
		std::cout << "평균 기부액 보다 큰 기부금의 수는 " << big_donation << "개 입니다.\n";
	}
	return 0;
}
