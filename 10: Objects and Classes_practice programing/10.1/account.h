#ifndef ACCOUNT_H
#define ACCOUNT_H

class BankAccount {
private:
	char name[40]; //예금주
	char acctnum[25]; //계좌번호
	double balance; //잔액
public:
	BankAccount(const char* client = "no name", const char* num = "0", double bal = 0.0);
	void show(void) const;
	void deposit(double cash); //입금
	void withdraw(double cash); //출금
};
#endif
