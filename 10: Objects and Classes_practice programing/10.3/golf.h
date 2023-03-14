#ifndef GOLF_H
#define GOLF_H
class golf {
private:
	enum { Len = 40 };
	char fullname[Len];
	int handicap;
public:
	golf();
	golf(const char* name, int hc);
	int setgolf(golf& g);
	void sethandicap(int hc);
	void updatehandicap();
	void showgolf() const;
};
#endif
