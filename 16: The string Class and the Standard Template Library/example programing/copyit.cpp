#include <iostream>
#include <iterator>
#include <vector>

int main() {
	using namespace std;
	int casts[10] = { 2,5,9,7,1,3,6,8,10,4 };
	vector<int> dice(10);
	copy(casts, casts + 10, dice.begin());
	cout << "주사위를 던져라!\n";
	ostream_iterator<int, char> out_iter(cout, " ");
	copy(dice.begin(), dice.end(), out_iter);
	cout << endl;
	cout << "역방향 이터레이터의 암시적 사용:\n";
	copy(dice.rbegin(), dice.rend(), out_iter);
	cout << endl;
	cout << "역방향 이터레이터의 명시적 사용:\n";
	vector<int>::reverse_iterator ri;
	for (ri = dice.rbegin(); ri != dice.rend(); ++ri)
		cout << *ri << ' ';
	cout << endl;
	return 0;
}
