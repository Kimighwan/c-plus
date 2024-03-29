#ifndef ARRAYTP_H
#define ARRAYTP_H
#include<iostream>
#include <cstdlib>
template <class T, int n>
class ArrayTP {
private:
	T ar[n];
public:
	ArrayTP() {}
	explicit ArrayTP(const T& t);
	virtual T& operator[](int i);
	virtual T operator[](int i) const;
};

template <class T, int n>
ArrayTP<T, n>::ArrayTP(const T& t) {
	for (int i = 0; i < n; i++)
		ar[i] = t;
}

template <class T, int n>
T& ArrayTP<T, n>::operator[](int i) {
	if (i < 0 || i >= n)
	{
		std::cerr << "배열의 경계를 벗어나느 에러: " << i << "--> 잘못된 인덱스입니다.\n";
		std::exit(EXIT_FAILURE);
	}
	return ar[i];
}

template <class T, int n>
T ArrayTP<T, n>::operator[](int i) const {
	if (i < 0 || i >= n)
	{
		std::cerr << "배열의 경계를 벗어나느 에러: " << i << "--> 잘못된 인덱스입니다.\n";
		std::exit(EXIT_FAILURE);
	}
	return ar[i];
}
#endif
