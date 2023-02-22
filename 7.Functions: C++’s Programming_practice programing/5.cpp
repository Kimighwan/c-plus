#include <iostream>

//하나의 정수를 매개변수 취하고, 그 매개변수의 팩토리알 구하는 함수
//0! = 1 이다. 
// n > 0 일때 n! = n * (n-1)! 이다.
//루프를 사용하기

double factorial(unsigned int num);

int main() {
	using namespace std;
	cout << "계승을 구할 수를 입력하십시오(끝내려면 q를 입력): ";
	unsigned int num;
	while (cin >> num)
	{
		cout << num << "! 은 " << factorial(num) << "입니다.\n";
		cout << "계승을 구할 수를 입력하십시오(끝내려면 q를 입력): ";
	}
	cout << "포르그램을 종료합니다.";
	return 0;

}

double factorial(unsigned int num) {
	if (num == 0)
		return 1;
	return num * factorial(num - 1);
}
