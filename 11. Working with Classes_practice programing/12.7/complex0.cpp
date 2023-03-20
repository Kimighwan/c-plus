#include <iostream>
#include "complex0.h"

complex::complex(double rl, double img) {
	real = rl;
	imaginary = img;
}

complex	complex::operator+(const complex& com) const{
	return complex(real + com.real, imaginary + com.imaginary);
}

complex	complex::operator-(const complex& com) const{
	return complex(real - com.real, imaginary - com.imaginary);
}

complex	complex::operator*(const complex& com) const{
	return complex(real * com.real - imaginary * com.imaginary, real * com.imaginary + imaginary * com.real);
}

complex	complex::operator*(double x) const{
	return complex(x * real, x * imaginary);
}

complex	complex::operator~() const{
	return complex(real, -imaginary);
}

std::ostream& operator<<(std::ostream& os, const complex& com) {
	os << "(" << com.real << "," << com.imaginary << "i)";
	return os;
}

std::istream& operator>>(std::istream& is, complex& com) {
	std::cout << "실수부: ";
	if (!(is >> com.real))
		return is;
	std::cout << "허수부: ";
	if (!(is >> com.imaginary))
		return is;

	return is;
}
