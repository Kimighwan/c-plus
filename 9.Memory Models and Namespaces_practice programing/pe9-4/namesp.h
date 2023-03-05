namespace SALES {
	const int QUARTERS = 4;
	struct Sales {
		double sales[QUARTERS];
		double anerage;
		double max;
		double min;
	};
	//4 or n 보다 적은 개수의 항목을 배열 ar로 부터 s의 sales멤버로 복사한다. 평균값 최대값, 최소값 계산하여 저장, 나머지는 0으로 설정
	void setSales(Sales& s, const double ar[], int n);
	// 분기별 판매액 자료를 사용자에게 요구, s의 멤버에 저장, 평균값, 최대값, 최소값 저장한다
	void setSales(Sales& s);

	void showSales(const Sales& s);
}
