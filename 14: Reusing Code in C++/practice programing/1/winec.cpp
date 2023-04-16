#include "winec.h"
#include <iostream>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

Wine::Wine(const char* l, int y, const int yr[], const int bot[])
	: label(l), year(y), list(ArrayInt(yr, y), ArrayInt(bot, y)) {
}

Wine::Wine(const char* l, const ArrayInt& yr, const ArrayInt& bot)
	: label(l), year(yr.size()), list(ArrayInt(yr), ArrayInt(yr)) {
	if (yr.size() != bot.size())
	{
		cerr << "수확년도 수와 와인이 생성된 년도 수가 틀립니다, 0으로 초기화합니다.\n";
		year = 0;
		list = PairArray(ArrayInt(), ArrayInt());
	}
	else
	{
		list.first() = yr;
		list.second() = bot;
	}
}

Wine::Wine(const char* l, const PairArray& yr_bot)
	: label(l), year(yr_bot.first().size()), list(yr_bot) { }

Wine::Wine(const char* l, int y) : label(l), year(y), list(ArrayInt(0,y), ArrayInt(0,y))
{}

void Wine::GetBottles() {
	if (year < 1) {
		cout << "수확년도 수가 입력되지 않았습니다.\n	";
		return;
	}

	cout << year << "년 간의 " << label << " 데이터를 입력하십시오:\n";
	for (int i = 0; i < year; i++)
	{
		cout << "년도를 입력하십시오: ";
		cin >> list.first()[i];
		cout << "수량을 입력하십시오: ";
		cin >> list.second()[i];
	}
}

void Wine::Show() const {
	cout << "와인: " << label << endl;
	cout << "\t년도\t수량\n";
	for (int i = 0; i < year; i++)
		cout << "\t" << list.first()[i] << "\t" << list.second()[i] << endl;
}
