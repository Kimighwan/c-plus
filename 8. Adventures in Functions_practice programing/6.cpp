#include <iostream>
#include <string>
using namespace std;

template <typename T> // 가장 큰 항목을 리턴
T maxn(T arr[], int count);

template <> char* maxn(char* arr[], int count); //가장 긴 문자열의 주소를 리턴 <특수화>

int main() {
	int arr1[6] = { 1,2,3,4,5,6 };
	double arr2[4] = { 1.1,2.2,3.3,4.4 };
	const char * arr3[5] = { "computer", "mouse", "cpu", "vgu", "main" };

	cout << "가장 큰 int 값: " << maxn(arr1, 6) << endl;
	cout << "가장 큰 double 값: " << maxn(arr2, 4) << endl;
	cout << "가장 긴 문자열: " << maxn(arr3, 5) << endl;
	return 0;
}

template <typename T> 
T maxn(T arr[], int count) {
	T max = arr[0];
	for (int i = 0; i < count; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}

template <> char* maxn(char* arr[], int count) {
	char* maxpt = arr[0];
	for (int i = 0; i < count; i++)
	{
		if (strlen(maxpt) < strlen(arr[i]))
			maxpt = arr[i];
	}
	return maxpt;
}
