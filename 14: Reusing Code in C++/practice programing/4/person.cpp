#include "person.h"
#include <cstring>
using std::cout;
using std::cin;

Person::Person(const char* fn, const char* ln) {
	std::strncpy(firstname, fn, LEN - 1);
	firstname[LEN - 1] = '\0';
	std::strncpy(lastname, ln, LEN - 1);
	lastname[LEN - 1] = '\0';
}

void Person::set() {
	cout << "이름을 입력하십시오: ";
	cin.getline(firstname, LEN);
	cout << "성을 입력하십시오: ";
	cin.getline(lastname, LEN);
}

void Gunslinger::set() {
	Person::set();
	cout << "총 뽑는 시간을 입력하십시오: ";
	cin >> drawtime;
	cout << "notch를 입력하십시오: ";
	cin >> notch;
}

void Gunslinger::Show() const {
	Person::Show();
	cout << ": " << drawtime << " drawtime, " << notch << " notch\n";
}
