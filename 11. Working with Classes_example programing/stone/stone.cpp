#include <iostream>
using std::cout;
#include "stonewt.h"
void display(const Stonewt& st, int n);
int main() {
	Stonewt A = 275;
	Stonewt B(285.7);
	Stonewt C(21, 8);

	cout << "A의 몸무게: ";
	A.show_stn();
	cout << "B의 몸무게: ";
	B.show_stn();
	cout << "C의 몸무게: ";
	C.show_lbs();
	A = 276.8;
	C = 325;
	cout << "저녁 식사를 마친 후 A의 몸무게: ";
	A.show_stn();
	cout << "저녁 식사를 마친 후 C의 몸무게: ";
	C.show_lbs();
	display(C, 2);
	display(422, 2);
}

void display(const Stonewt& st, int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "와! ";
		st.show_stn();
	}
}
