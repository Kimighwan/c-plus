#ifndef GOLF_H
#define GOLF_H
const int Len = 40;
struct golf {
	char fullname[Len];
	int handicap;
};

void setgolf(golf& g, const char* name, int hc); // 매개변수 값을 golf 구조체를 제공된 이름과 핸디캡으로 설정한다.

int setgolf(golf& g); // 이름과 핸디캡을 묻고, g의 멤버들을 입력된 값으로 설정한다. 이름이 입력되면 1리턴, 빈 이름이면 0을 리턴

void handicap(golf& g, int hc); // handicap을 새로운 값으로 설정

void showgolf(const golf& g); // golf 구조체 내용 출력
#endif 
