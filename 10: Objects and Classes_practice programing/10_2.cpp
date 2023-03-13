#include <iostream>
#include <string>
using namespace std;
class Person {
private:
	static const int LIMIT = 25;
	string lname;
	char fname[LIMIT];
public:
	Person() { lname = ""; fname[0] = '\0'; }
	Person(const string& ln, const char* fn = "Heyyou");
	void Show() const;
	void FormalShow() const;
};

Person::Person(const string& ln, const char* fn) {
	lname = ln;
	strcpy_s(fname, fn);
}
void Person::Show() const {
	cout << "이름(Show 메서드 사용): " << fname << " " << lname;
}
void Person::FormalShow() const {
	cout << "이름(FormalShow 메서드 사용): " << lname << ", " << fname;
}

int main() {
	Person one;
	Person two("Kim");
	Person three("Kim", "kukhwan");

	one.Show();
	cout << endl;
	one.FormalShow();
	cout << endl;
	
	two.Show();
	cout << endl;
	two.FormalShow();
	cout << endl;

	three.Show();
	cout << endl;
	three.FormalShow();
	cout << endl;
}
