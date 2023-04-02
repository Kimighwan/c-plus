#include <iostream>
using namespace std;
#include "classic.h"
#include <cstring>

Cd::Cd(const char* s1, const char* s2, int n, double x) {
	strncpy(performers, s1, 49);
	performers[49] = '\0';
	strncpy(label, s2, 19);
	label[19] = '\0';
	selections = n;
	playtime = x;
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
	strncpy(performers, d.performers, 49);
	performers[49] = '\0';
	strncpy(label, d.label, 19);
	label[19] = '\0';
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Classic::Classic(const char* t, const char* s1, const char* s2, int n, double x) : Cd(s1, s2, n, x) {
	strncpy(title, t, 49);
	title[49] = '\0';
}

Classic::Classic(char* t, Cd& d) : Cd(d) {
	strncpy(title, t, 49);
	title[49] = '\0';
}

void Classic::Report() const {
	cout << "대표곡: " << title << endl;
	Cd::Report();
}

Classic& Classic::operator=(const Classic& cc) {
	if (this == &cc)
		return *this;
	Cd::operator=(cc);
	strncpy(title, cc.title, 49);
	title[49] = '\0';
	return *this;
}
