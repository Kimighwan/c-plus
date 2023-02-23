#include <iostream>
#include <string>
#include <array>
const int Seasons = 4;
const char * Sname[Seasons] = {"Spring", "Summer", "Fall", "Winter"};
void fill(double pa[]);
void show(const double pa[]);

int main() {
	double expenses[4];
	fill(expenses);
	show(expenses);
	return 0;
}

void fill(double pa[]) {
	using namespace std;
	for (int i = 0; i < Seasons; i++) {
		cout << Sname[i] << "에 소요되는 비용: ";
		cin >> pa[i];
	}
}

void show(const double pa[]) {
	using namespace std;
	double total = 0.0;
	cout << "\n계절별 비용\n";
	for (int i = 0; i < Seasons; i++) {
		cout << Sname[i] << " : $" << pa[i] << endl;
		total += pa[i];
	}
	cout << "총 비용: $" << total << endl;
}
