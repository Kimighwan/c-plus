#include <iostream>
double mailch(int);

int main() {
	using namespace std;
	int mail;
	cout << "마일 단위로 거리를 입력하시오: ";
	cin >> mail;
	double km;
	km = mailch(mail);
	cout << mail << "마일은 " << km << "킬로미터입니다.";
}

double mailch(int a) {
	return a * 1.60934;
}
