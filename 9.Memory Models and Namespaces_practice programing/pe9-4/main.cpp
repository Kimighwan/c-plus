#include <iostream>
#include "namesp.h"
using namespace SALES;
using std::cout;
using std::endl;
using std::cin;
int main() {
	Sales s1, s2;
	const double ar[QUARTERS] = { 100.1, 200.2, 300.3, 400.4 };
	
	cout << "s1의 분기별 실적:" << endl;
	setSales(s1, ar, QUARTERS);
	showSales(s1);

	cout << "s2의 분기별 실적:" << endl;
	setSales(s2);
	showSales(s2);

	return 0;
}
