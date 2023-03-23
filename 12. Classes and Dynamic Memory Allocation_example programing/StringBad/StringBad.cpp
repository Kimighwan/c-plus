#include <cstring>
#include "StringBad.h"
using std::cout;
int StringBad::num_strings = 0;
StringBad::StringBad(const char* s) {
	len = strlen(s);
	str = new char[len + 1];
	strcpy_s(str, s);
	num_strings++;
	cout << num_strings << ": \"" << str << "\" 객체생성\n";
}

StringBad::StringBad() {
	len = 4;
	str = new char[4];
	strcpy_s(str, "C++");
	num_strings++;
	cout << num_strings << ": \"" << str << "\" 디폴트 객체 생성\n";
}

StringBad::~StringBad() {
	cout<<"\""<<str<<"\" 객체파괴, ";
	--num_strings;
	cout << "남은 객체수: " << num_strings << "\n";
	delete[] str;
}

std::ostream& operator<<(std::ostream& os, const StringBad& st){
	os << st.str;
	return os;
}
