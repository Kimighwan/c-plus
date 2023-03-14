#include <iostream>
#include "namesp.h"
using namespace std;
int main() {
	using namespace SALES;
	double ar[QUARTERS] = { 100.1, 200.2, 300.3, 400.4 };
	Sales tmp;


	cout << "A의 분기별 실적:" << endl;
	Sales A = Sales(tmp, ar, 5);
	A.showSales();

	cout << "B의 분기별 실적:" << endl;
	for (int i = 0; i < QUARTERS; i++)
	{
		cout << i + 1 << "분기 판매액: ";
		cin >> ar[i];
	}

	Sales B = Sales(tmp, ar, QUARTERS);
	B.showSales();
	return 0;
}
