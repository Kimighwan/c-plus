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
	strcpy_s(fullname, name);
	sethandicap(hc);
}
// 이름과 핸디캡을 묻고, g의 멤버들을 입력된 값으로 설정한다. 이름이 입력되면 1리턴, 빈 이름이면 0을 리턴
int golf::setgolf(golf& g) {
	cout << "이름을 입력하십시오: ";
	cin.getline(g.fullname, Len);
	if (g.fullname[0] == '\0')
		return 0;
	cout << "핸디캡을 입력하십시오(정수형): ";
	cin >> g.handicap;
	cin.clear();
	while (cin.get() != '\n')
		continue;
	*this = golf(g.fullname, g.handicap);

	return 1;
}
// handicap을 새로운 값으로 설정
void golf::sethandicap(int hc) {
	handicap = hc;
}
// golf 구조체 내용 출력
void golf::showgolf() const {
	cout << "이름: " << fullname << endl;
	cout << "핸디캡: " << handicap << endl;
}
void golf::updatehandicap() {
	int hc;
	cout << this->fullname << "의 핸디캡 변경" << endl;
	cout << "새 핸디캡: ";
	cin >> hc;
	handicap = hc;
	cin.clear();
	while (cin.get() != '\n')
		continue;
}
