#ifndef COMPLEX0_H	
#define COMPLEX0_H
#include <iostream>
class complex {
private:
	double real;
	double imaginary;
public:
	complex(double rl = 0.0, double img = 0.0);
	~complex() {};
	complex	operator+(const complex& com) const;
	complex	operator-(const complex& com) const;
	complex	operator*(const complex& com) const;
	complex	operator*(double x) const;
	complex	operator~() const;
	friend complex operator*(double x, const complex& com) { return com * x; }
	friend std::ostream& operator<<(std::ostream& os, const complex& com);
	friend std::istream& operator>>(std::istream& is, complex& com);
};
#endif
