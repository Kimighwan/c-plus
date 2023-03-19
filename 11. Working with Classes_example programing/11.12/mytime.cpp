#include "mytime.h"

Time::Time() {
	houres = minutes = 0;
}

Time::Time(int h, int m) {
	houres = h;
	minutes = m;
}

void Time::AddMin(int m) {
	minutes += m;
	houres += minutes / 60;
	minutes %= 60;
}

void Time::AddHr(int h) {
	houres += h;
}

void Time::Reset(int h, int m) {
	houres = h;
	minutes = m;
}

Time Time::operator+(const Time& t) const {
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.houres = houres + t.houres + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

Time Time::operator-(const Time& t)const {
	Time diff;
	int t1, t2;
	t1 = t.minutes + 60 * t.houres;
	t2 = minutes + 60 * houres;
	diff.minutes = (t2 - t1) % 60;
	diff.houres = (t2 - t1) / 60;
	return diff;
}

Time Time::operator*(double mult)const {
	Time result;
	long totalminutes = houres * mult * 60 + minutes * mult;
	result.houres = totalminutes / 60;
	result.minutes = totalminutes % 60;
	return result;
}

std::ostream& operator<<(std::ostream& os, const Time& t) {
	os << t.houres << "시간, " << t.minutes << "분";
	return os;
}
