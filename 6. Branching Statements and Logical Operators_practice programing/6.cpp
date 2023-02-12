//기부할 사람이 몇명인가 묻는다
//기부자의 이름과 기부금을 입력 요구 -> 정보는 동적 구조체 배열에 저장
//구조체 멤버는 기부자의 이름 char 또는 string 객체, 기부금 double
//10,000 달러 또는 그 이상 기부한 사람들에 대해 정보 표시 이 목록 위에는 고액 기부자 붙인다
//나머지 가부자 목록을 표시하되 목록위에 소액 기부자 붙인다
//목록에 기부자가 없으면 기부자가 없습니다 출력
#include <iostream>

struct donators {
	char name[20];
	double money;
};

void show_VIP(donators* p_donators, int num);
void show_Persom(donators* p_donators, int num);

int main() {
	int num_donators = 0;
	std::cout << "기부할 사람은 몇명 입니까? : ";
	(std::cin >> num_donators).get();

	donators *list = new donators[num_donators];

	for (int i = 0; i < num_donators; i++) {
		std::cout << "기부자 #" << i + 1<<": ";
		std::cin.getline(list[i].name, 20);
		std::cout << "기부금 #" << i + 1<<": ";
		(std::cin >> list[i].money).get();
	}
	show_VIP(list, num_donators);
	show_Persom(list, num_donators);
	delete [] list;
	return 0;
}

void show_VIP(donators* p_donators, int num) {
	int count = 0;
	std::cout << "\n---------------------------\n"
		"<고액 기부자>\n";
	for (int i = 0; i < num; i++) {
		if (p_donators[i].money >= 10000) {
			std::cout << "이름: " << p_donators[i].name << ", 기부액: " << p_donators[i].money << std::endl;
			count++;
		}
	}
	if (count == 0)
		std::cout << "기부자가 없습니다.\n";
}

void show_Persom(donators* p_donators, int num) {
	int count = 0;
	std::cout << "\n---------------------------\n"
		"<소액 기부자>\n";
	for (int i = 0; i < num; i++) {
		if (p_donators[i].money < 10000) {
			std::cout << "이름: " << p_donators[i].name << ", 기부액: " << p_donators[i].money << std::endl;
			count++;
		}
	}
	if(count ==0)
		std::cout << "기부자가 없습니다.\n";
}
