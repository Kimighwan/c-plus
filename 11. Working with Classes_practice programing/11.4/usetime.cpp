#include <iostream>
#include "mytime.h"

int main() {
	using std::cout;
	using std::endl;
	Time A(3, 45);
	Time B(2, 38);
	Time C;

	cout << "A, B, C:\n";
	cout << A << "; " << B << "; " << C << endl;
	A = B + C;								// 프렌드 operator+()
	cout << "B + C: " << A << endl;
	A = B - C;								// 프렌드 operator-()
	cout << "B - C: " << A << endl;
	A = B * 2.75;				// 프렌드 operator*()
	cout << "B * 2.75: " << A << endl;
	cout << "10 * B: " << 10 * B << endl;	// 프렌드 operator*()
	return 0;
}
