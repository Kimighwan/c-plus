#include <iostream>
using namespace std;
#include "classic1.h"
#include <cstring>

Cd::Cd(const Cd& c) {
	performers = new char[strlen(c.performers) + 1];
	strcpy(performers, c.performers);
	label = new char[strlen(c.label) + 1];
	strcpy(label, c.label);
	selections = c.selections;
	playtime = c.playtime;
}

Cd::Cd(const char* s1, const char* s2, int n, double x) {
	performers = new char[strlen(s1) + 1];
	strcpy(performers, s1);
	label = new char[strlen(s2) + 1];
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::~Cd() {
	delete[] performers;
	delete[] label;
}

void Cd::Report() const {
	cout << "연주자: " << performers << endl;
	cout << "음반사: " << label << endl;
	cout << "곡목 수: " << selections << endl;
	cout << "연주 시간: " << playtime << endl;
}

Cd& Cd::operator=(const Cd& d) {
	if (this == &d)
		return *this;
	delete[] performers;
	delete[] label;
	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	label = new char[strlen(d.label) + 1];
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Classic::Classic(const char* t, const char* s1, const char* s2, int n, double x) : Cd(s1, s2, n, x) {
	title = new char[strlen(t) + 1];
	strcpy(title, t);
}

Classic::Classic(char* t, Cd& d) : Cd(d) {
	title = new char[strlen(t) + 1];
	strcpy(title, t);
}

Classic::Classic(const Classic& cc) {
	title = new char[strlen(cc.title) + 1];
	strcpy(title, cc.title);
}

void Classic::Report() const {
	cout << "대표곡: " << title << endl;
	Cd::Report();
}

Classic::~Classic() {
	delete[] title;
}

Classic& Classic::operator=(const Classic& cc) {
	if (this == &cc)
		return *this;
	delete title;
	Cd::operator=(cc);
	title = new char[strlen(cc.title) + 1];
	strcpy(title, cc.title);
	return *this;
}
