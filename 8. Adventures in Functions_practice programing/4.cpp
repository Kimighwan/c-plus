#include <iostream>
#include <cstring>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
struct stringy {
	char* str;
	int ct;
};
void set(stringy& str, const char test[]);
void show(const stringy& str, int n = 1);
void show(const char* str, int n = 1);

int main() {
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	return 0;
}

void set(stringy& str, const char test[]) {
	char* pa = new char[strlen(test) + 1];
	str.str = pa;
	strcpy(pa, test);
	str.ct = strlen(str.str);
}

void show(const stringy& str, int n) {
	for (int i = 0; i < n; i++)
		cout << str.str << endl;
}

void show(const char* str, int n) {
	for (int i = 0; i < n; i++)
		cout << str << endl;
}
