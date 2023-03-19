#include <iostream>
using std::cout;
#include "stonewt.h"

Stonewt::Stonewt(double lbs, char md) {
	mode = md;
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs, char md) {
	mode = md;
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt() {
	stone = pds_left = pounds = 0;
}

Stonewt::~Stonewt() {}

void Stonewt::setmode(char md) {
	mode = md;
}

Stonewt Stonewt::operator+(const Stonewt& st)const {
	return Stonewt(pounds + st.pounds);
}

Stonewt Stonewt::operator-(const Stonewt& st)const {
	return Stonewt(pounds - st.pounds);
}

Stonewt Stonewt::operator*(const Stonewt& st)const {
	return Stonewt(pounds * st.pounds);
}

std::ostream& operator<<(std::ostream& os, const Stonewt& st) {
	if (st.mode == 's')
		os << st.stone << "스톤 " << st.pds_left << "파운드\n";
	else if (st.mode == 'p')
		os << int(st.pds_left) << "파운드\n";
	else if (st.mode == 'd')
		os << st.pounds << "파운드\n";
	else
		os << "Stonewt 객체의 모드 지정이 틀렸습니다.\n";
	return os;
}
