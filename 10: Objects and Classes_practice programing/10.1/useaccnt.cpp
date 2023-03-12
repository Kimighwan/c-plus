#include <iostream>
#include "account.h"
int main() {
	BankAccount a;
	BankAccount b = { "Ikhwan", "123456", 895884 };

	a.show();
	b.show();

	a = { "kukhwan", "654321", 543210 };
	a.show();
	b.deposit(1000000);
	a.deposit(200000);
	a.show();
	b.show();
	a.withdraw(400000);
	b.deposit(1000000);
	a.show();
	b.show();
	b.deposit(1000000);
	b.show();
	b.withdraw(3000000);
	b.show();
}
