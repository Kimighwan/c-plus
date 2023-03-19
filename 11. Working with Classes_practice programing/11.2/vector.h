#ifndef VECT_H
#define VECT_H
#include <iostream>
namespace VECTOR {
	class Vector
	{
	private:
		double x;
		double y;
		char mode;
		void  set_x(double, double);
		void  set_y(double, double);
	public:
		Vector();
		Vector(double n1, double n2, char form = 'r');
		void reset(double n1, double n2, char form = 'r');
		~Vector();
		double show_x() const { return x; }
		double show_y() const { return y; }
		double show_len() const;
		double show_ang() const;
		void polar_mode();
		void rect_mode();
		Vector operator+(const Vector& v) const;
		Vector operator-(const Vector& v) const;
		Vector operator-() const;
		Vector operator*(double n) const;
		friend Vector operator*(double n, const Vector& v);
		friend std::ostream& operator<<(std::ostream& os, const Vector& v);
	};
}
#endif
