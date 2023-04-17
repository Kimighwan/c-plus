#include <iostream>
#include "tv.h"
int main() {
	using std::cout;
	Tv Lg;
	cout << "Lg\" TV의 초기 설정값:\n";
	Lg.Show();
	Lg.onoff();
	Lg.chanup();
	cout << "\nLg\" TV의 변경된 설정값:\n";
	Lg.Show();

	Remoto control;
	control.set_chan(Lg, 10);
	control.volup(Lg);
	control.volup(Lg);
	cout << "\n리모콘 사용 후 Lg\" TV의 설정값:\n";
	Lg.Show();

	Tv samsung; (Tv::On);
	samsung.set_mode();
	control.set_chan(samsung, 28);
	cout << "\nsansung\" TV의 설정값:\n";
	samsung.Show();
	return 0;
}
