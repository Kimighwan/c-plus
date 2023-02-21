#include <iostream>
//범위 1~47 5개 뽑고
//1~27 1개 뽑고 - 메가 수
//그랑프리를 타려면 모든수가 맞아야한다
//승률은 범위속하는 모든 수를 뽑을 확률과 메가 수를 바르게 뽑을 확률의 곱
long double probability(unsigned num, unsigned picks);

int main() {
	using namespace std;
	double total, choice;
	long double first, second = 0.0;
	cout << "1회차: 전체 수의 개수와 뽑을 수의 개수를 입력하시오:\n";
	if ((cin >> total >> choice) && choice <= total)
	{
		first = probability(total, choice);
		cout << "2회차: 전체 수의 개수와 뽑을 수의 개수를 입력하시오:\n";
		if ((cin >> total >> choice) && choice <= total)
		{
			second = probability(total, choice);
			cout << "당신이 그랑프리를 탈 승률은 " << first * second << "번의 시도에 한 번입니다.\n";
		}
	}
	cout << "프로그램 종료\n";
	return 0;
}

long double probability(unsigned num, unsigned picks) {
	long double result = 1.0;
	long double n;
	unsigned p;
	for (n = num, p = picks; p > 0; n--, p--)
		result *= n / p;
	return result;
}
