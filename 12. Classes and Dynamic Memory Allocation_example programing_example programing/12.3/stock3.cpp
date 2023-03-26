#include <iostream>
#include <cstring>
#include "stock3.h"
using namespace std;
Stock::Stock() {
	company = new char[8];
	strcpy(company, "no name");
	company[7] = '\0';
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}
Stock::Stock(const char* co, long n , double pr) {
	company = new char[strlen(co) + 1];

	if (n < 0)
	{
		std::cout << "주식 수는 음수가 될 수 없으므로, " << company << " shares를 0으로 설정합니다.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}

Stock::Stock(const Stock& st) {
	company = new char[strlen(st.company) + 1];
	strcpy(company, st.company);
	shares = st.shares;
	share_val = st.share_val;
	set_tot();
}

Stock Stock::operator=(const Stock& st) {
	if (this == &st)
		return *this;
	delete[] company;
	company = new char[strlen(st.company) + 1];
	strcpy(company, st.company);
	shares = st.shares;
	share_val = st.share_val;
	set_tot();
	return *this;
}

void Stock::buy(long num, double price) {
	if (num < 0)
	{
		std::cout << "매입 주식 수는 음수가 될 수 없으므로, 거래가 취소되었습니다.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}
void Stock::sell(long num, double price) {
	using std::cout;
	if (num < 0)
		cout << "매도 주식 수는 음수가 될 수 없으므로, 거래가 취소되었습니다,\n";
	else if (num > shares)
		cout << "보유 주식보다 많은 주식을 매도할 수 없으므로, 거래가 취소되었습니다.\n";
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}
void Stock::update(double price) {
	share_val = price;
	set_tot();
}

ostream& operator<<(ostream& os, const Stock& st) {
	os << "회사명: " << st.company
		<< "  주식 수: " << st.shares << '\n'
		<< "  주가: $" << st.share_val << '\n'
		<< "  주식 총 가치: $" << st.total_val << '\n';

	return os;
}

const Stock& Stock::topval(const Stock& s) const {
	if (s.total_val > total_val)
		return s;
	else
		return *this;
}
