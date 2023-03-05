#include <iostream>
#include "namesp.h"
using std::cout;
using std::endl;
using std::cin;
namespace SALES {
	//4 or n 보다 적은 개수의 항목을 배열 ar로 부터 s의 sales멤버로 복사한다. 평균값, 최대값, 최소값 계산하여 저장, 나머지는 0으로 설정
	void setSales(Sales& s, const double ar[], int n) {
		double total=0.0;
		if (n > QUARTERS)
			n = QUARTERS;

		for (int i = 0; i < n; i++)
		{
			s.sales[i] = ar[i];
		}

		if (n < QUARTERS)
		{
			do
			{
				s.sales[n] = 0.0;
				n++;
			} while (n != QUARTERS);
		}
		for (int i = 0; i < n; i++)
			total += s.sales[i];
		s.anerage = total / n;
		s.max = s.sales[0];
		for (int i = 0; i < QUARTERS; i++)
		{
			if (s.max < s.sales[i])
				s.max = s.sales[i];
		}
		s.min = s.sales[0];
		for (int i = 0; i < QUARTERS; i++)
		{
			if (s.min > s.sales[i])
				s.min = s.sales[i];
		}
	}
	// 분기별 판매액 자료를 사용자에게 요구, s의 멤버에 저장, 평균값, 최대값, 최소값 저장한다
	void setSales(Sales& s) {
		double total = 0.0;
		cout << "분기별로 판매액을 입력하십시오:\n";
		for (int i = 0; i < QUARTERS; i++)
		{
			cout << "분기 #" << i + 1 << ": ";
			cin >> s.sales[i];
			total += s.sales[i];
		}
		s.anerage = total / QUARTERS;
		s.max = s.sales[0];
		for (int i = 0; i < QUARTERS; i++)
		{
			if (s.max < s.sales[i])
				s.max = s.sales[i];
		}
		s.min = s.sales[0];
		for (int i = 0; i < QUARTERS; i++)
		{
			if (s.min > s.sales[i])
				s.min = s.sales[i];
		}
	}

	void showSales(const Sales& s) {
		cout << "판매량: " << endl;
		for (int i = 0; i < QUARTERS; i++)
					cout << "분기 #" << i + 1 << ": " << s.sales[i] << endl;
	    cout << "평균값: " << s.anerage << ", 최대값 : " << s.max << ", 최소값 : " << s.min << endl;
	}
}
