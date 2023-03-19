#ifndef STONEWT_H
#define STONEWT_H
class Stonewt {
private:
	enum { Lbs_per_stn = 14 };
	int stone;
	double pds_left;
	double pounds;
	char mode;
public:
	Stonewt(double lbs, char md = 's');
	Stonewt(int stn, double lbs, char md = 's');
	Stonewt();
	~Stonewt();
	void setmode(char md);
	Stonewt operator+(const Stonewt & st)const;
	Stonewt operator-(const Stonewt& st)const;
	Stonewt operator*(const Stonewt& st)const;
	friend std::ostream& operator<<(std::ostream& os, const Stonewt& st);
};
#endif
