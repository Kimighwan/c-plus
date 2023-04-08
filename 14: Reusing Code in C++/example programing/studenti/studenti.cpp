#include "studenti.h"
using std::ostream;
using std::endl;
using std::istream;
using std::string;
double Student::Average() const {
	if (ArrayDb::size() > 0)
		return ArrayDb::sum() / ArrayDb::size();
	else
		return 0;
}

const std::string& Student::Name() const {
	return (const string&)*this;
}
double& Student::operator[](int n) {
	return ArrayDb::operator[](n);
}
double Student::operator[](int n) const {
	return ArrayDb::operator[](n);
}

ostream& Student::arr_out(ostream& os) const {
	int i;
	int lim = ArrayDb::size();
	if (lim > 0)
	{
		for (i = 0; i < lim; i++)
		{
			os << ArrayDb::operator[](i) << " ";
			if (i % 5 == 4)
				os << endl;
		}
		if (i % 5 != 0)
			os << endl;
	}
	else
		os << " 빈 배열 ";
	return os;
}

//operator>>()의 string 버전을 사용
istream& operator>>(istream& is, Student& stu) {
	is >> (string&)stu;
	return is;
}

//string friend getline(ostream &, const string &)을 사용한다
istream& getline(istream& is, Student& stu) {
	getline(is, (string&)stu);
	return is;
}

//operator<<()의 string버전을 사용한다.
ostream& operator<<(ostream& os, const Student& stu) {
	os << "Scores for " << (const string&)stu << ":\n";
	stu.arr_out(os); //scores를 위해 private 메서듣 사용
	return os;
}
