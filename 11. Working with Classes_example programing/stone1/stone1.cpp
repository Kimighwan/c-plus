#include <iostream>
#include "stonewt1.h"

int main() {
	using std::cout;
	Stonewt A(9, 2.8);
	double A_wt = A;
	cout << "double형으로 변환 => ";
	cout << "A: " << A_wt << "파운드\n";
	cout << "int형으로 변환 => ";
	cout << "A: " << int(A) << "파운드\n";
	return 0;
}
