#include <iostream>
#include <cmath>

struct polar {
	double distance;
	double angle;
};
struct rect {
	double x;
	double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main() {
	using namespace std;
	rect rplace;
	polar pplace;

	cout << "x갑과 y값을 입력하시오: ";
	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "x값과 y값을 입력하시오(끝내려면 q를 입력) : ";
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}

polar rect_to_polar(rect xypos) {
	using namespace std;
	polar result;

	result.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
	result.angle = atan2(xypos.y, xypos.x);
	return result;
}

void show_polar(polar dapos) {
	using namespace std;
	const double Rad_to_deg = 57.29577951;

	cout << "가리 = " << dapos.distance;
	cout << ", 각도 = " << dapos.angle * Rad_to_deg;
	cout << "도\n";
}
