#include <iostream>
//5.cpp에서 3년 월간 판매량을 입력받아 2차원 배열에 저장
//각 해당 연도으 연간 판매량 출력
//2년째, 3년째 누적 판매량을 출력
const int Year = 3;
const int Month = 12;
int main() {
	int Year_Sum = 0;
	int sum[Year] = { 0,0,0 };
	const char* MonthName[12] = { "1월", "2월", "3월", "4월", "5월", "6월", "7월", "8월", "9월", "10월", "11월", "12월" };
	int MonthValue[Year][Month];

	for (int i = 0; i < Year; i++) {
		std::cout << i + 1 << "년 차 " << std::endl;
		for (int j = 0; j < Month; j++) {
			std::cout<< MonthName[j] << "판매량 수 : ";
			std::cin >> MonthValue[i][j];
			sum[i] += MonthValue[i][j];
		}
		std::cout << 1 + i << "년 차의 총 판매 수 : " << sum[i] << std::endl;
	}

	for (int i = 0; i < 3; i++) {
		Year_Sum += sum[i];
		std::cout << i + 1 << "년째 누적 판매량 : " << Year_Sum << std::endl;
	}
	
	return 0;
}
