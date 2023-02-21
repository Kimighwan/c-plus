#include <iostream>
using namespace std;
double avg(double x, double y);

int main() {
	double n1, n2;
	double result = 0.0;

	cout << "두수를 입력하시오(끝내려면 하나라도 0을 입력): ";
	cin >> n1 >> n2;
	while (n1 && n2)
	{
		result = avg(n1, n2);
		cout << n1 << "과 " << n2 << "의 조화평균은 " << result << "입니다.";
		cout << "두수를 입력하시오(끝내려면 하나라도 0을 입력): ";
		cin >> n1 >> n2;
	}
}

double avg(double x, double y) {
	return 2.0 * x * y / (x + y);
}
