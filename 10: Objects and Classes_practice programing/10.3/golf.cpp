#include <iostream>
#include <cstring>
using namespace std;
#include "golf.h"

golf::golf() {
	strcpy_s(fullname, "na name");
	handicap = 0;
}
//비대화식 버전
// 매개변수 값을 golf 구조체를 제공된 이름과 핸디캡으로 설정한다.
golf::golf(const char* name, int hc) {
	strncpy_s(g.fullname, name, Len);
	g.handicap = hc;
}
// 이름과 핸디캡을 묻고, g의 멤버들을 입력된 값으로 설정한다. 이름이 입력되면 1리턴, 빈 이름이면 0을 리턴
int golf(golf& g) {
	std::cout << "이름을 입력하십시오: ";
	std::cin.getline(g.fullname, Len);
	if (g.fullname[0] == '\0')
		return 0;
	std::cout << "핸디캡을 입력하십시오(정수형): ";
	while (!(std::cin >> g.handicap))
	{
		std::cin.clear();
		std::cout << "핸디캡을 입력하십시오(정수형): ";
	}
	while (std::cin.get() != '\n')
		continue;
	return 1;
}
// handicap을 새로운 값으로 설정
void handicap(golf& g, int hc) {
	g.handicap = hc;
}
// golf 구조체 내용 출력
void showgolf(const golf& g) {
	std::cout << "이름: " << g.fullname << ", 핸디캡: " << g.handicap << std::endl;
}
