#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"
const int MIN_PER_HR = 60;
bool newcustomer(double x); // 새 고객이 도착 했는가?
int main() {
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;
	std::srand(std::time(0));
	cout << "사례 연규: 익환 은행의 ATM\n" << "큐의 최대 길이를 입력하십시오: ";
	int qs;
	cin >> qs;
	Queue line(qs);

	cout << "시뮬레이션 시간 수를 입력하십시오: ";
	int hours; 
	cin >> hours;              // 시뮬레이션은 1분에 1주기를 실행한다
	long cyclelimit = MIN_PER_HR * hours; //시뮬레이션 주기 수

	cout << "시간당 평균 고객 수를 입력하십시오: ";
	double perhour; // 시간당 평균 고객 수
	cin >> perhour;
	double min_per_cust; // 평균 고객 도착 간격(분 단위)
	min_per_cust = MIN_PER_HR / perhour;

	Item temp;
	long turnaways = 0; // 발길을 돌린 고객 수
	long customers = 0; // 줄선 고객 수
	long served = 0; // 거래를 처리한 고객 수
	long sum_line = 0; // 큐의 누적 길이
	int wait_time = 0; // ATM이 빌 때까지 대기 시간
	long line_wait = 0; // 대기 누적 시간

	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_cust))
		{
			if (line.isfull())
				turnaways++;
			else
			{
				customers++;
				temp.set(cycle);  // cycle이 도착시간이 된다.
				line.enqueue(temp);
			}
		}

		if (wait_time <= 0 && !line.isempty())
		{
			line.dequeue(temp);
			wait_time = temp.ptime();
			line_wait += cycle - temp.when();
			served++;
		}
		if (wait_time > 0)
			wait_time--;
		sum_line += line.queuecount();
		}
	if (customers > 0)
	{
		cout << " 큐에 줄을 선 고객 수: " << customers << endl;
		cout << "거래를 처리한 고객 수: " << served << endl;
		cout << " 발길을 돌린 고객 수: " << turnaways << endl;
		cout << "			평균 큐의 길이:	";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout.setf(ios_base::showpoint);
		cout << (double)sum_line / cyclelimit << endl;
		cout << "			평균 대기 시간:	" << (double)line_wait / served << "분\n";
	}
	else
		cout << "고객이 한 명도 없습니다\n";
	cout << "완료!\n";

	return 0;
	
}

bool newcustomer(double x) {
	return (std::rand() * x / RAND_MAX < 1);
}
