#include <iostream>
#include <initializer_list>
double sum(std::initializer_list<double> il);
double average(const std::initializer_list<double>& ril);
int main() {
	using namespace std;
	cout << "목록 1 : 합계 = " << sum({ 2,3,4 }) << ", 평균 = " << average({ 2,3,4 }) << endl;
	initializer_list<double> dl = { 1.1,2.2,3.3,4.4,5.5 };
	cout << "목록 2 : 합계 = " << sum(dl) << ", 평균 = " << average(dl) << endl;
	dl = { 16.0,25.0,36.0,40.0,64.0 };
	cout << "목록 2 : 합계 = " << sum(dl) << ", 평균 = " << average(dl) << endl;
	return 0;
}

double sum(std::initializer_list<double> il) {
	double tot = 0;
	for (auto p = il.begin(); p != il.end(); p++)
		tot += *p;
	return tot;
}
double average(const std::initializer_list<double>& ril) {
	double tot = 0;
	int n = ril.size();
	double ave = 0.0;
	if (n > 0)
	{
		for (auto p = ril.begin() p != ril.end(); p++)
			tot += *p;
		ave = tot / n;
	}
	return ave;
}
