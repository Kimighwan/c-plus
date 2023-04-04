#include "student.h"
using std::ostream;
using std::endl;
using std::istream;
using std::string;
double Student::Average() const {
	if (scores.size() > 0)
		return scores.sum() / scores.size();
	else
		return 0;
}

const std::string& Student::Name() const {
	return name;
}
double& Student::operator[](int n) {
	return scores[n];
}
double Student::operator[](int n) const {
	return scores[n];
}

ostream& Student::arr_out(ostream& os) const {
	int i;
	int lim = scores.size();
	if (lim > 0)
	{
		for (i = 0; i < lim; i++)
		{
			os << scores[i] << " ";
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
istream& operator>>(istream& is, Student* stu) {
	is >> stu->name;
	return is;
}

//string friend getline(ostream &, const string &)을 사용한다
istream& getline(istream& is, Student& stu) {
	getline(is, stu.name);
	return is;
}

//operator<<()의 string버전을 사용한다.
ostream& operator<<(ostream& os, const Student& stu) {
	os << stu.name << " 학생의 성적표:\n";
	stu.arr_out(os); //scores를 위해 private 메서듣 사용
	return os;
}
