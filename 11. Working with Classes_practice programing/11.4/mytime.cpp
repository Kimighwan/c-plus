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

Time operator+(const Time& t1, const Time& t2){
	Time sum;
	sum.minutes = t1.minutes + t2.minutes;
	sum.houres = t1.houres + t2.houres + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

Time operator-(const Time& t1, const Time& t2) {
	Time diff;
	int tot1, tot2;
	tot1 = t1.minutes + 60 * t1.houres;
	tot2 = t2.minutes + 60 * t2.houres;
	diff.minutes = (tot2 - tot1) % 60;
	diff.houres = (tot2 - tot1) / 60;
	return diff;
}

Time operator*(const Time& t, double mult) {
	Time result;
	long totalminutes = t.houres * mult * 60 + t.minutes * mult;
	result.houres = totalminutes / 60;
	result.minutes = totalminutes % 60;
	return result;
}

std::ostream& operator<<(std::ostream& os, const Time& t) {
	os << t.houres << "시간, " << t.minutes << "분";
	return os;
}
