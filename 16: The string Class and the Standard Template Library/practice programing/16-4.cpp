#include <iostream>
#include <algorithm>
#define MAX 10

int reduce(long ar[], int n);
void show(const long ar[], int n);

int main() {
	long array[MAX] = { 12,12,5,6,11,5,6,77,11,12 };
	show(array, MAX);
	int newsize = reduce(array, MAX);
	show(array, newsize);
	std::cout << sizeof(newsize);
	return 0;
}

int reduce(long ar[], int n) {
	std::sort(ar, ar + n);
	long* end;
	end = std::unique(ar, ar + n);
	return end -ar;
}

void show(const long ar[], int n)
{
	for (int i = 0; i < n; i++)
		std::cout << ar[i] << ' ';
	std::cout << std::endl;
}
