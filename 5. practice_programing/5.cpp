#include <iostream>
//1년 간 월간 판매량(권수) 입력 받기
//char * 배열 사용하여 월 이름을 초기화
//입력 받은 판매권수는 int형 배열애 저장
//int 배열의 총 판매량 출력
int main() {
	int sum = 0;
	const char* MonthName[12] = { "1월", "2월", "3월", "4월", "5월", "6월", "7월", "8월", "9월", "10월", "11월", "12월" };
	int MonthValue[12];
	for (int i = 0; i < 12; i++) {
		std::cout << MonthName[i] << "의 판매량 수 : ";
		std::cin >> MonthValue[i];
		sum += MonthValue[i];
	}
	std::cout << "연간 총 판매량: " << sum << std::endl;
	return 0;
}
