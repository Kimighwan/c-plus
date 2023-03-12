#include <iostream>
#include "account.h"
#include <cstring>
BankAccount::BankAccount(const char* client, const char* num, double bal) {
	using namespace std;
	strncpy_s(name, client, 39);
	name[39] = '\0';
	strncpy_s(acctnum, num, 24);
	acctnum[24] = '\0';
	balance = bal;
}
void BankAccount::show(void) const {
	using std::cout;
	using std::endl;
	cout << "예금주: " << name << endl;
	cout << "계좌 번호: " << acctnum << endl;
	cout << "잔액: " << balance << endl;
}
void BankAccount::deposit(double cash) {
	if (cash < 0)
		std::cout << "입금 금액은 0보다 작을 수 없습니다.\n";
	else
		balance += cash;
}
void BankAccount::withdraw(double cash) {
	if (cash < 0)
		std::cout << "출금 금액은 0보다 작을 수 없습니다.\n";
	else if (cash <= balance)
		balance -= cash;
	else
		std::cout << "출금 금액은 잔액보다 클 수 없습니다.\n";
}
