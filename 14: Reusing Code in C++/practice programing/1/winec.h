#ifndef WINEC_H
#define WINEC_H
#include <string>
#include <valarray>
#include "Pair.h"

class Wine {
private:
	std::string label;
	typedef std::valarray<int> ArrayInt;
	typedef Pair<ArrayInt, ArrayInt> PairArray; //첫 멤버는 포도 수확 년도, 두번째 멤버는 해당 년도의 와인의 수량(병 수)
	int year;
	PairArray list;
public:
	Wine() : label("no name"), year(0), list(ArrayInt(), ArrayInt()) {}
	Wine(const char* l, int y, const int yr[], const int bot[]);
	Wine(const char* l, const ArrayInt& yr, const ArrayInt& bot);
	Wine(const char* l, const PairArray& yr_bot);
	Wine(const char* l, int y);
	void GetBottles(); // 하나의 Wine객체가 y개의 수확 년도로 주어 졌을 때, 사용자가 수확 년도와 와인 수량을 입력하도록 지시한다.
	const std::string& Label();
	int sum() const { return list.second().sum(); }
	void Show() const; // 객체 내용 디스플레이
};
#endif
