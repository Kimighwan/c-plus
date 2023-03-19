#include <cmath>
#include "vector.h"
using std::sqrt;
using std::sin;
using std::cos;
using std::atan2;
using std::cout;

namespace VECTOR {
	const double Rad_to_deg = 45.0 / atan(1.0);

	void  Vector::set_x(double len, double ang) {
		x = len * cos(ang);
	}
	void  Vector::set_y(double len, double ang) {
		y = len * sin(ang);
	}

	Vector::Vector() {
		x = y = 0.0;
		mode = 'r';
	}

	Vector::Vector(double n1, double n2, char form) {
		mode = form;
		if (mode == 'r')
		{
			x = n1;
			y = n2;
		}
		else if (mode == 'p')
		{
			set_x(n1, n2 / Rad_to_deg);
			set_y(n1, n2 / Rad_to_deg);
		}
		else
		{
			cout << "Vector()에 전달된 제3의 매개변수가 잘못되었다.\n";
			cout << "그래서 백터를 0으로 설정하였다.\n";
			x = y = 0.0;
			mode = 'r';
		}
	}

	void Vector::reset(double n1, double n2, char form)
	{
		mode = form;
		if (mode == 'r')
		{
			x = n1;
			y = n2;
		}
		else if (mode == 'p')
		{
			set_x(n1, n2 / Rad_to_deg);
			set_y(n1, n2 / Rad_to_deg);
		}
		else
		{
			cout << "Vector()에 전달된 제3의 매개변수가 잘못되었다.\n";
			cout << "그래서 백터를 0으로 설정하였다.\n";
			x = y = 0.0;
			mode = 'r';
		}
	}

	Vector::~Vector() {}

	void Vector::polar_mode() {
		mode = 'p';
	}

	void Vector::rect_mode() {
		mode = 'r';
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
		if (v.mode == 'r')
			os << "(x, y) = (" << v.x << ", " << v.y << ")";
		else if (v.mode == 'p')
		{
			os << "(m, a) = (" << v.show_len() << ", " << v.show_ang() * Rad_to_deg << ")";
		}
		else
			os << "Vector 객체의 모드 지정이 틀렸습니다.\n";
		return os;
	}

	double Vector::show_len() const {
		return sqrt(x * x + y * y);
	}

	double Vector::show_ang() const {
		if (x == 0.0 && y == 0.0)
			return 0.0;
		else
			return atan2(y, x);
	}
}
