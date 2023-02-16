#include <iostream>
template <typename T>
void Swap(T& a, T& b);

struct jop {
	char name[40];
	double salary;
	int floor;
};

template <> void Swap<jop>(jop& j1, jop& j2);
void Show(jop& j);

int main() {
	using namespace std;
	cout.precision(2);
	cout.setf(ios::fixed, ios::floatfield);
	int i = 10, j = 20;
	cout << "i, j =	" << i << ", " << j << ",\n";
	cout << "컴파일러가 생성한 int 형 교환기를 사용하면\n";
	Swap(i, j);  // void Swap(int &, int &)를 생성한다.
	cout << "이제 i, j = " << i << ", " << j << ".\n";

	jop sue = { "Susan Yaffee", 73000.60, 7 };
	jop sideny = { "Sideny Taffee", 78060.72,9 };
	cout << "jop 교환전:\n";
	Show(sue);
	Show(sideny);
	Swap(sue, sideny);
	cout << "jop 교환후:\n";
	Show(sue);
	Show(sideny);

	return 0;
}

template <typename T>
void Swap(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <> void Swap<jop>(jop& j1, jop& j2) {
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;
	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}

void Show(jop& j) {
	using namespace std;
	cout << j.name << ": (" << j.floor << "층에 거주) $" << j.salary << endl;
}
