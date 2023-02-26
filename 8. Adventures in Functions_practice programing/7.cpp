#include <iostream> // 배열 내용을 출력하는 대신 배열 내용 합을 리턴하는 SumArray
// 재산 목록의 전체 개수와 모든 채무의 합계를 보고
using namespace std;

template <typename T>
int SumArray(T arr[], int count);

template <typename T>
double SumArray(T* arr[], int count);

struct debts {
	char name[50];
	double amount;
};

int main() {
	
	int things[6] = { 13,31,103,301,310,130 };
	debts list[3] = {
	   {"Ima Wolfe", 2400.0},
	   {"Ura Foxe", 1300.0},
	   {"Iby Stout", 1800.0}
	};
	double* pd[3];

	for (int i = 0; i < 3; i++)
		pd[i] = &list[i].amount;

	cout << "list의 재산 합계: " << SumArray(things, 6) << endl;
	cout << "list의 채무 합계: " << SumArray(pd, 3) << endl;
	return 0;
}

template <typename T>
int SumArray(T arr[], int count) {
	int total = 0;
	for (int i = 0; i < count; i++)
	{
		total += arr[i];
	}
	return total;
}

template <typename T>
double SumArray(T* arr[], int count) {
	double total = 0;
	for (int i = 0; i < count; i++)
	{
		total += *arr[i];
	}
	return total;
}
