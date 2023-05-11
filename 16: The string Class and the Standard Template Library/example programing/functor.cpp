#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

template<class T>
class TooBig {
private:
	T cutoff;
public:
	TooBig(const T& t) : cutoff(t) {}
	bool operator()(const T& v) { return v > cutoff; }
};
void outint(int n) { std::cout << n << " "; }
int main() {
	using namespace std;
	TooBig<int> f100(100); //제한 = 100	
	int vals[10] = { 50,100,90,180,60,210,415,88,188,201 };
	list<int> A(vals, vals + 10);
	list<int> B(vals, vals + 10);
	cout << "원래의 리스트:\n";
	for_each(A.begin(), A.end(), outint);
	cout << endl;
	for_each(B.begin(), B.end(), outint);
	cout << endl;
	A.remove_if(f100); // 이름이 있는 함수 객체를 사용한다
	B.remove_if(TooBig<int>(200)); // 함수객체를 생성한다
	cout << "정비된 리스트:\n";
	for_each(A.begin(), A.end(), outint);
	cout << endl;
	for_each(B.begin(), B.end(), outint);
	cout << endl;
	return 0;
}
