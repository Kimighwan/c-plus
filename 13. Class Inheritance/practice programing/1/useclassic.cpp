#include <iostream>
using namespace std;
#include "classic.h"
void Bravo(const Cd& disk);
int main() {
	Cd c1("Beatles", "Capitol", 12, 35.5);
	Classic c2 = Classic("Piaon Sonata in B falt, Fantasia in C	", "Alfred BRendel", "Philips", 2, 57.17);
	Cd* pcd = &c1;

	cout << "객체를 직접 사용한다:\n";
	c1.Report();  //Cd 메서드를 이용한다
	c2.Report();  //Classic 메서드를 이용한다

	cout << "객체를 지시하는 Cd * 포인터를 사용한다:\n";
	pcd->Report();  //Cd 객체에서 Cd 메서드를 사용
	pcd = &c2;
	pcd->Report(); //Classic 객체에서 Classic 메서드를 사용

	cout << "Cd 참조 매개변수를 사용하여 함수를 호출한다\n";
	Bravo(c1);
	Bravo(c2);

	cout << "대입을 테스트한다:\n";
	Classic copy;
	copy = c2; 
	copy.Report();

	return 0;
}

void Bravo(const Cd& disk) {
	disk.Report();
}
