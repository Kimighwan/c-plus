#ifndef COW_H
#define COW_H
#pragma warning(disable:4996)
class Cow {
private:
	char name[20];
	char* habit;
	double weight;
public:
	Cow();
	Cow(const char* nm, const char* ha, double wt);
	Cow(const Cow& c);
	~Cow();
	Cow& operator=(const Cow& c);
	void ShowCow() const; 
};
#endif
