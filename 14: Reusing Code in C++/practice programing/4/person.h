#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#pragma warning (disable:4996)
const int LEN = 40;
class Person {
private:
	char firstname[LEN];
	char lastname[LEN];
public:
	Person() { firstname[0] = lastname[0] = '\0'; }
	Person(const char* fn, const char* ln);
	virtual ~Person() {}
	virtual void Show() const { std::cout << firstname << " " << lastname << std::endl; }
	virtual void set(); //?????
};

class Gunslinger : virtual public Person {
private:
	int	notch; // 권총에 새겨진 금 수를 나타냄
	double drawtime;
public:
	Gunslinger() : Person("no", "name"), notch(0), drawtime(0.0) { }
	Gunslinger(const char* fn, const char* ln, int n =0, double dt = 0.0) : Person(fn, ln), notch(0), drawtime(0.0) { }
	Gunslinger(const Person& p, int n = 0, double dt =0.0) : Person(p), notch(0), drawtime(0.0) { }
	virtual ~Gunslinger() {}
	double Draw() { return drawtime; }  //권총을 빼내는데 걸리는 시간
	void Show() const; // 모든 정보를 출력
	void set();
};

class PokerPlayer : virtual public Person {
public:
	PokerPlayer() : Person("no", "name") {}
	PokerPlayer(const char* fn, const char* ln) : Person(fn, ln) { }
	PokerPlayer(const Person& p) : Person(p) { }
	virtual ~PokerPlayer() {}
	int Draw() { return std::rand() % 52 + 1; }
};

class BadDude : public Gunslinger, public PokerPlayer {
public:
	BadDude() : Person("no", "name"), Gunslinger() { }
	BadDude(const char* fn, const char* ln, int n = 0, double dt = 0.0) : Person(fn, ln), Gunslinger(fn, ln, n, dt) { }
	BadDude(const Person& p, int n = 0, double dt = 0.0) : Person(p), Gunslinger(p, n, dt) { }
	double Gdeaw() { return Gunslinger::Draw(); } // 총을 꺼내는데 걸리는 시간
	int Cdraw() { return PokerPlayer::Draw(); } // 다음에 꺼낼 카드 값을 리턴
	void Show() const { return Gunslinger::Show(); }
	void set() { return Gunslinger::set(); }
};
#endif
