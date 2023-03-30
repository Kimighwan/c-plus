#include <iostream>
#include <string>
#include "acctabc.h"
const int CLIENTS = 4;
int main() {
	using std::cin;
	using std::cout;
	using std::endl;

	AcctABC* p_clients[CLIENTS];
	std::string temp;
	long tempnum;
	double tempbal;
	char kind;
	for (int i = 0; i < CLIENTS; i++)
	{
		cout << "고객의 이름을 입력하십시오: ";
		getline(cin, temp);
		cout << "고객의 은행계좌 번호를 입력하십시오: ";
		cin >> tempnum;
		cout << "계좌 개설시 초기 금액을 입력하십시오: $";
		cin >> tempbal;
		cout << "Brass 계좌는 1번을 BrassPlus 계좌는 2번을 입력하십시오: ";
		
		while (cin >> kind && (kind != '1' && kind != '2'))
			cout << "1또는 2를 입력하십시오: ";
		if (kind == '1')
			p_clients[i] = new Brass(temp, tempnum, tempbal);
		else
		{
			double tmax, trate;
			cout << "당좌대월 한계를 입력하십시오: $";
			cin >> tmax;
			cout << "이자율을 입력하십시오(소수점까지 입력하십시오): ";
			cin >> trate;
			p_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
		}
		while (cin.get() != '\n')
			continue;
	}
	cout << endl;
	for (int i = 0; i < CLIENTS; i++)
	{
		p_clients[i]->ViewAcct();
		cout << endl;
	}
	for (int i = 0; i < CLIENTS; i++)
		delete p_clients[i];
	cout << "프로그램을 종료합니다.\n";

	return 0;
}
