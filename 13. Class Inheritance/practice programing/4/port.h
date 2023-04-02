#ifndef PORT_H
#define PROT_H
#pragma warning(disable:4996)
#include <iostream>
using namespace std;
class Port {
private:
	char* brand;
	char style[20]; //tawny, ruby, vintage
	int bottles;
public:
	Port(const char* br = "none", const char* st = "none", int b = 0);
	Port(const Port& p);
	virtual ~Port() { delete[] brand; }
	Port& operator=(const Port& p); //복사 생성자
	Port& operator+=(int b); // bottles에 b를 더한다
	Port& operator-=(int b); //가능할 경우 bottles에서 b를 뺀다
	int BottleCount() const { return bottles; }
	virtual void Show() const;
	friend ostream& operator<<(ostream& os, const Port& p);
};

class VintagePort : public Port { //style = vintage
private:
	char* nickname;
	int year;
public:
	VintagePort(const char* br = "none", const char* st = "none", int b = 0, const char* nn = "none", int y = 0);
	VintagePort(const VintagePort& vp);
	~VintagePort() { delete[] nickname; }
	VintagePort& operator=(const VintagePort& vp);
	void Show() const;
	friend ostream& operator<<(ostream& os, const VintagePort& vp);
};
#endif
