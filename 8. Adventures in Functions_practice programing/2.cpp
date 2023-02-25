#include <iostream>
#include <cstring>
using namespace std;
const int SIZE = 30;
struct CandyBar {
	char name[SIZE]; // 상표명
	double weight;
	int calorie;
};

void Set(CandyBar& cnady, char* str = "Millennium Munch", double wt = 2.85, int cal = 350);
void Show(const CandyBar& candy);
int main() {
	CandyBar list;
	Set(list);
	Show(list);
	Set(list, "Ik Hwan");
	Show(list);
	Set(list, "Kuk Hwan", 3.2);
	Show(list);
	Set(list, "Ik Hwan", 2.8, 280);
	Show(list);
	return 0;
}

void Set(CandyBar& candy, char* str, double wt, int cal) {
	strcpy_s(candy.name, str);
	candy.weight = wt;
	candy.calorie = cal;
}

void Show(const CandyBar& candy) {
	cout << "상표명 : " << candy.name << endl;
	cout << "중  량 : " << candy.weight << endl;
	cout << "칼로리 : " << candy.calorie << endl;
	cout << endl;
}
