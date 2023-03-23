#include <iostream>
using std::cout;
#include "StringBad.h"

void callme1(StringBad&);
void callme2(StringBad);

int main() {
	using std::endl;
	{
		cout << "내부 블록을 시작한다.\n";
		StringBad headline1("headline1");
		StringBad headline2("headline2");
		StringBad sports("sports");
		cout << "headline1: " << headline1 << endl;
		cout << "headline2: " << headline2 << endl;
		cout << "sports: " << sports << endl;
		callme1(headline1);
		cout << "headline1: " << headline1 << endl;
		cout << "하나의 객체를 다른 객체로 초기화:\n";
		StringBad sailor = sports;
		cout << "sailor: " << sailor << endl;
		cout << "하나의 객체를 다른 객체에 대입:\n";
		StringBad knot;
		knot = headline1;
		cout << "knot: " << knot << endl;
		cout << "이 블록을 빠져나온다.\n";
	}
	cout << "main()의 끝\n";
	return 0;
}

void callme1(StringBad& rsb) {
	cout << "참조로 전달된 StringBad:\n";
	cout << "		\"" << rsb << "\"\n";
}
void callme2(StringBad sb) {
	cout << "값으로 전달된 StringBad:\n";
	cout << "		\"" << sb << "\"\n";
}
