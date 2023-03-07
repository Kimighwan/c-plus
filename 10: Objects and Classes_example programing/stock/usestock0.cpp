#include <iostream>
#include "stock00.h"
int main() {
	Stock test;
	test.acquire("Ikhwan", 20, 12.50);
	test.show();
	test.buy(15, 18.125);
	test.show();
	test.sell(400, 20.00);
	test.show();
	test.buy(300000, 40.125);
	test.show();
	test.sell(300000, 0.125);
	test.show();
	return 0;
}
