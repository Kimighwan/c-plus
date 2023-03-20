#include <iostream>
#include "complex0.h"
using namespace std;
int main() {
	complex a(3.0, 4.0);
	complex b;
	cout << "하나의 복소수를 입력하십시오(끝내려면 q):\n";
	while (cin >> b)
	{
		cout << "b = " << b << '\n';
		cout<<"공액복소수 = "<< ~b << '\n';
		cout << "a = " << a << '\n';
		cout << "a + b = " << a + b << '\n';
		cout << "a - b = " << a - b << '\n';
		cout << "a * b = " << a * b << '\n';
		cout << "2 * b = " << 2 * b << '\n';
		cout << "하나의 복소수를 입력하십시오(끝내려면 q):\n";
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}
