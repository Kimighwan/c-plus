#include <iostream>
using std::cout;
using std::endl;

template <class T> void counts();
template <class T> void report(T &);

template <class TT>
class HasFriend {
private:
	TT item;
	static int ct;
public:
	HasFriend(const TT& i) : item(i) { ct++; }
	~HasFriend() { ct--; }
	friend void counts<TT>();
	friend void report<>(HasFriend<TT>&);
};

template <class T>
int HasFriend<T>::ct = 0;

template <class T>
void counts() {
	cout << "템플릿 크기: " << sizeof(HasFriend<T>) << "; ";
	cout << "템플릿 counts(): " << HasFriend<T>::ct << endl;
}

template <class T>
void report(T & hf) {
	cout << hf.item << endl;
}
int main() {
	counts<int>();
	HasFriend<int> hfi1(10);
	HasFriend<int> hfi2(20);
	HasFriend<double> hfdb(10.5);
	report(hfi1);
	report(hfi2);
	report(hfdb);
	cout << "counts<int>() 출력:\n";
	counts<int>();
	cout << "counts<double>() 출력:\n";
	counts<double>();
	return 0;
}
