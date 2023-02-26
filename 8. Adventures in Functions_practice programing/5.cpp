#include <iostream>
using namespace std;
template <typename T>
T max5(T array[]);

int main() {
	int arr1[5] = { 1,2,3,4,5 };
	double arr2[5] = { 1.1,2.2,3.3,4.4,5.5 };

	cout << "int 형의 가장 큰 원소: " << max5(arr1) << endl;
	cout << "double 형의 가장 큰 원소: " << max5(arr2) << endl;
	return 0;
}

template <typename T>
T max5(T array[]) {
	T max = array[0];
	for (int i = 0; i < 5; i++)
	{
		if (max < array[i])
			max = array[i];
	}
	return max;
}
