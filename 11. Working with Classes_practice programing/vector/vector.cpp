#include <cmath>
#include "vector.h"
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR {
	const double Rad_to_deg = 45.0 / atan(1.0);

	void  Vector::set_len() {
		len = sqrt(x * x + y * y);
	}
	void  Vector::set_ang() {
		if (x == 0.0 && y == 0.0)
			ang = 0.0;
		else
			ang = atan2(y, x);
	}
	void  Vector::set_x() {
		x = len * cos(ang);
	}
	void  Vector::set_y() {
		y = len * sin(ang);
	}

	Vector::Vector() {
		x = y = len = ang = 0.0;
		mode = RECT;
	}
	
	Vector::Vector(double n1, double n2, Mode form) {
		mode = form;
		if (mode == RECT)
		{
			x = n1;
			y = n2;
			set_len();
			set_ang();
		}
		else if(mode == POL)
		{
			len = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "Vector()에 전달된 제3의 매개변수가 잘못되었다.\n";
			cout << "그래서 백터를 0으로 설정하였다.\n";
			x = y = len = ang = 0.0;
			mode = RECT;
		}
	}

	void Vector::reset(double n1, double n2, Mode form)
	{
		mode = form;
		if (mode == RECT)
		{
			x = n1;
			y = n2;
			set_len();
			set_ang();
		}
		else if (mode == POL)
		{
			len = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "Vector()에 전달된 제3의 매개변수가 잘못되었다.\n";
			cout << "그래서 백터를 0으로 설정하였다.\n";
			x = y = len = ang = 0.0;
			mode = RECT;
		}
	}

	Vector::~Vector(){}

	void Vector::polar_mode() {
		mode = POL;
	}

	void Vector::rect_mode() {
		mode = RECT;
	}

	Vector  Vector::operator+(const Vector& v) const {
		return Vector(x + v.x, y + v.y);
	}

	Vector  Vector::operator-(const Vector& v) const {
		return Vector(x - v.x, y - v.y);
	}

	Vector  Vector::operator-() const {
		return Vector(-x, -y);
	}

	Vector  Vector::operator*(double n) const {
		return Vector(n * x, n * y);
	}

	Vector operator*(double n, const Vector& v) {
		return v * n;
	}

	std::ostream& operator<<(std::ostream& os, const Vector& v) {
		if (v.mode == Vector::RECT)
			os << "(x, y) = (" << v.x << ", " << v.y << ")";
		else if (v.mode == Vector::POL)
		{
			os << "(m, a) = (" << v.len << ", " << v.ang * Rad_to_deg << ")";
		}
		else
			os << "Vector 객체의 모드 지정이 틀렸습니다.\n";
		return os;
	}
}
