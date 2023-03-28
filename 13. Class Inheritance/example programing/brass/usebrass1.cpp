#include <iostream>
#include "brass.h"
int main() {
	using std::cout;
	using std::endl;
	Brass Ikhwan("Ikhwan", 381299, 4000.00);
	BrassPlus Kukhwan("Kukhwan", 382288, 3000.00);
	Ikhwan.ViewAcct();
	cout << endl;
	Kukhwan.ViewAcct();
	cout << endl;
	cout << "Kukhwan 씨의 계좌에 $1000 입금:\n";
	Kukhwan.Deposit(1000.00);
	cout << "Kukhwan 씨의 현재 잔액: $" << Kukhwan.Balance() << endl;
	cout << "Ikhwan 씨의 계좌에서 $4200 인출:\n";
	Ikhwan.Withdraw(4200.00);
	cout << "Ikhwan 씨의 현재 잔액: $" << Ikhwan.Balance() << endl;
	cout << "Kukhwan 씨의 계좌에서 $4200 인출:\n";
	Kukhwan.Withdraw(4200.00);
	Kukhwan.ViewAcct();
	return 0;
}
