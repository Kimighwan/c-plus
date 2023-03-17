#include <iostream>
#include "mytime.h"

int main() {
	using std::cout;
	using std::endl;
	Time A(3, 45);
	Time B(2, 38);
	Time tmp;

	cout << "A와 B:\n";
	cout << A << "; " << B << endl;
	tmp = A + B;
	cout << "A + B: " << tmp << endl;
	tmp = A * 1.13;
	cout << "A * 1.13: " << tmp << endl;
	cout << "10 * B: " << 10 * B << endl;
	
	return 0;
}
