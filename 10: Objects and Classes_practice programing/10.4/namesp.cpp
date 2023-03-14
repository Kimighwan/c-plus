#include <iostream>
#include "namesp.h"
using std::cout;
using std::endl;
using std::cin;
namespace SALES 
{
	Sales::Sales() 
	{
		double sales[QUARTERS] = { 0.0,0.0,0.0,0.0 };
		anerage = 0.0;
		max = 0.0;
		min = 0.0;
	}
	//4 or n 보다 적은 개수의 항목을 배열 ar로 부터 s의 sales멤버로 복사한다. 평균값, 최대값, 최소값 계산하여 저장, 나머지는 0으로 설정
	Sales::Sales(Sales& s, const double ar[], int n) {
		double total = 0.0;
		if (n > QUARTERS)
			n = QUARTERS;

		for (int i = 0; i < n; i++)
		{
			this->sales[i] = ar[i];
		}

		if (n < QUARTERS)
		{
			do
			{
				this->sales[n] = 0.0;
				n++;
			} while (n != QUARTERS);
		}

		for (int i = 0; i < n; i++)
			total += this->sales[i];
		this->anerage = total / n;
		this->max = this->sales[0];

		for (int i = 0; i < QUARTERS; i++)
		{
			if (this->max < this->sales[i])
				this->max = this->sales[i];
		}
		this->min = this->sales[0];
		for (int i = 0; i < QUARTERS; i++)
		{
			if (this->min > this->sales[i])
				this->min = this->sales[i];
		}
	}


	void Sales::showSales() {
		cout << "판매량: " << endl;
		for (int i = 0; i < QUARTERS; i++)
			cout << "분기 #" << i + 1 << ": " << this->sales[i] << endl;
		cout << "평균값: " << this->anerage << ", 최대값 : " << this->max << ", 최소값 : " << this->min << endl;
	}
}
