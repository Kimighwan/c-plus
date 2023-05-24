#include <iostream>
#include <algorithm>
#define MAX 10
using namespace std;

template<class T>
int reduce(T ar[], int n);

template<class T>
void show(const T ar[], int n);

int main() {
	long array[MAX] = { 12,12,5,6,11,5,6,77,11,12 };
	show(array, MAX);

	int newsize = reduce(array, MAX);
	show(array, newsize);

	return 0;
}

template<class T>
int reduce(T ar[], int n) {
	sort(ar, ar + n);
	T* end;
	end = unique(ar, ar + n);
	return end - ar;
}

template<class T>
void show(const T ar[], int n) {
	for (int i = 0; i < n; i++)
		cout << ar[i] << ' ';
	cout << endl;
}
