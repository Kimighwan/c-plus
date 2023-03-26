#include <iostream>
using namespace std;
#include "stock3.h"
const int STKS = 4;
int main() {
	Stock stocks[STKS] = {
		Stock("A",1, 1.1),
		Stock("B",2, 2.2),
		Stock("C",3, 3.3),
		Stock("D",4, 4.4)
	};
	cout.setf(ios_base::fixed, ios_base::floatfield);	// #.## 형식
	cout.precision(2);									// #.## 형식
	cout.setf(ios_base::showpoint);

	std::cout << "보유 주식 리스트:\n";
	int st;
	for (st = 0; st < STKS; st++)
		cout << stocks[st];

	Stock top = stocks[0];
	for (st = 1; st < STKS; st++)
		top = top.topval(stocks[st]);
	std::cout << "\n최괴 가치의 주식:\n";
	cout << top;
	return 0;
}
