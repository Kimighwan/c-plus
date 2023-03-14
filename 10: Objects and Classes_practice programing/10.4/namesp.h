namespace SALES 
{
	const int  QUARTERS = 4 ;

	class Sales {
	private:
		double sales[QUARTERS];
		double anerage;
		double max;
		double min;
	public:
		Sales();
		//4 or n 보다 적은 개수의 항목을 배열 ar로 부터 s의 sales멤버로 복사한다. 평균값 최대값, 최소값 계산하여 저장, 나머지는 0으로 설정
		Sales(Sales& s, const double ar[], int n);
		void showSales();
	};
}
