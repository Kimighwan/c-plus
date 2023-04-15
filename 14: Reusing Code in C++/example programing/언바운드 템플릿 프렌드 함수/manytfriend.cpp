#include <iostream>
using std::cout;
using std::endl;

template <class T>
class ManyFriend {
private:
	T item;
public:
	ManyFriend(const T& i) :item(i) {}
	template <class C, class D> friend void show(C&, D&);
};

template <class C, class D> void show(C& c, D& d) {
	cout << c.item << ", " << d.item << endl;
}

int main() {
	ManyFriend<int> mfi1(10);
	ManyFriend<int> mfi2(20);
	ManyFriend<double> mfdb(10.5);
	cout << "mfi1, mfi2: ";
	show(mfi1, mfi2);
	cout << "mfdb, mfi2: ";
	show(mfdb, mfi2);

	return 0;
}
