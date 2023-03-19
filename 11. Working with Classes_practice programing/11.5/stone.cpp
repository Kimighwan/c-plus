#include <iostream>
using std::cout;
#include "stonewt.h"
int main() {
	Stonewt stn1 = 275;
	Stonewt stn2(285.7, 's');
	Stonewt stn3(21, 8.3, 'd');


	cout << "제1 객체: " << stn1 << "\n";
	cout << "제2 객체: " << stn2 << "\n";
	cout << "제3 객체: " << stn3 << "\n";

	Stonewt result;
	result = stn1 + stn2;
	result.setmode('s');
	cout << "stn1 + stn2 = " << result << "(스톤 파운드 조합 형식)\n";
	result = stn1 - stn2;
	result.setmode('p');
	cout << "stn1 - stn2 = " << result << "(정수 파운드 형식)\n";
	result = stn1 * stn2;
	result.setmode('d');
	cout << "stn1 * stn2 = " << result << "(부동소수점 파운드 형식)\n";
	cout << "프로그램을 종료합니다.\n";
	return 0;
}
