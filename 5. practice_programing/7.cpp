#include <iostream>
struct car {
	char Name[20];
	int Make_Yaer;
};
int main() {
	int count;
	std::cout << "몇 대의 차를 목록으로 관리하시겠습나까? ";
	(std::cin >> count).get();

	car *CarList = new car[count];

	for (int i = 0; i < count; i++) {
		std::cout << "자동차 #: " << i + 1 << std::endl;
		std::cout << "제작업체: ";
		std::cin.getline(CarList[i].Name, 20);
		std::cout << "제작년도: ";
		(std::cin >> CarList[i].Make_Yaer).get();
	}
	std::cout << "현재 귀하가 보유하고 있는 자동차 목록은 다음과 같습니다." << std::endl;
	for (int i = 0; i < count; i++) {
		std::cout << CarList[i].Make_Yaer << "년형 " << CarList[i].Name << std::endl;
	}
	return 0;
}
