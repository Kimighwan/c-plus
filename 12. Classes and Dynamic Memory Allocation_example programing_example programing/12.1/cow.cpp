#include <iostream>
using namespace std;
#include <cstring>
#include "cow.h"

Cow::Cow() {
	strcpy(name, "No Name");
	habit = new char[1];
	habit[0] = '\0';
	weight = 0.0;
}

Cow::Cow(const char* nm, const char* ha, double wt) {
	strncpy(name, nm, 19);
	name[19] = '\0';
	habit = new char[strlen(ha) + 1];
	strcpy(name, ha);
	weight = wt;
}

Cow::Cow(const Cow& c) {
	strcpy(name, c.name);
	habit = new char[strlen(c.habit) + 1];
	strcpy(habit, c.habit);
	weight = c.weight;
}

Cow::~Cow() {
	delete[] habit;
}

Cow& Cow::operator=(const Cow& c) {
	if (this == &c)
		return *this;
	delete[] habit;
	habit = new char[strlen(c.habit) + 1];
	strcpy(habit, c.habit);
	strcpy(name, c.name);
	weight = c.weight;
	return *this;
}

void Cow::ShowCow() const {
	cout << "이름: " << name << endl;
	cout << "습성: " << habit << endl;
	cout << "체중: " << weight << endl;
}
