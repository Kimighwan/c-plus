#include <iostream>

int main() {
	std::cout << "2개의 정수를 입력하시오: ";
	int a, b, start;
    int sum = 0;
	std::cin >> a >> b;
	start = a;
	for (; a <= b; a++) {
		sum += a;
	}
	std::cout << start << "부터 " << b << "까지 합은 " << sum << "입니다";
}
