#include <iostream>
using namespace std;

double calculate(double x, double y, double (*pa)(double, double));
double add(double x, double y);
double sub(double x, double y);
double mul(double x, double y);
double div(double x, double y);

int main() {
	double (*pa[4])(double, double) = { add, sub, mul, div };
	double x, y;
	double array[4] = {};
	cout << "x와 y를 입력하시오(끝내려면 q): ";
	while (cin >> x && cin >> y)
	{
		for (int i = 0; i < 4; i++)
		{
			array[i] = calculate(x, y, pa[i]);
		}
		cout << "x + y = " << array[0] << endl;
		cout << "x - y = " << array[1] << endl;
		cout << "x * y = " << array[2] << endl;
		cout << "x / y = " << array[3] << endl;
		cout << endl;
		cout << "x와 y를 입력하시오(끝내려면 q): ";
	}
}

double add(double x, double y) {
	return x + y;
}
double sub(double x, double y) {
	return x - y;
}
double mul(double x, double y) {
	return x * y;
}
double div(double x, double y) {
	return x / y;
}

double calculate(double x, double y, double (*pa)(double, double)) {
	return pa(x, y);
}
