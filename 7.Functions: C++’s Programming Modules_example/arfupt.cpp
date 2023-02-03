#include <iostream>

const double* f1(const double ar[], int n);
const double* f2(const double[], int);
const double* f3(const double*, int);

int main() {
	using namespace std;
	double av[3] = { 1112.3, 1542.6, 2227.9 };
	//int a;
	//int * pa;
	//pa = &a;  => int * pa = &a;
	// *pa == a; 
	const double* (*p1)(const double*, int) = f1; // (* f1) == 함수 / f1 == 함수를 지시하는 포인터
	auto p2 = f2;

	cout << "함수 포인터: ";
    cout<< "주소 값\n";
	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;

	//포인터들의 배열 pa
	const double* (*pa[3])(const double*, int) = { f1,f2,f3 };
	auto pb = pa; // pb는 pa의 첫 번째 원소이다 // pa는 배열이다 // 배열의 이름인 pa는 첫 번째 주소를 가르킨다
	
	cout << "\m함수 포인터를 원소로 가지는 배열: \n";
	cout<<"주소 값\n";
	for (int i = 0; i < 3; i++)
		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;

	cout << "\n함수 포인터를 가리키는 포인터: \n";
	cout << "주소 값\n";
	for (int i = 0; i < 3; i++)
		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;

	//함수 포인터를 원소로 가지는 배열을 가리키는 포인터
	cout << "\n포인터를 원소로 가지는 배열을 가리키는 포인터: \n";
	cout << "주소 값\n";
	auto pc = &pa;
	cout << (*pc[0])(av, 3) << ": " << *(*pc[0])(av, 3) << endl;
	//위를 직접 선언하기
	const double* (*(*pd)[3])(const double*, int) = &pa;
	//pdb에 리턴 값을 저장한다
	const double* pdb = (*pd)[1](av, 3);
	cout << pdb << ": " << *pdb << endl;
	cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd[2]))(av, 3) << endl;
	
	return 0;
}

const double* f1(const double *ar, int n) {
	return ar;
}

const double* f2(const double ar[], int n) {
	return ar + 1;
}

const double* f3(const double ar[], int n) {
	return ar + 2;
}
