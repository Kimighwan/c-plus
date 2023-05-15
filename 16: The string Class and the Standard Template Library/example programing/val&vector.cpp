#include <iostream>
#include <valarray>
#include <vector>
#include <algorithm>
int main() {
	using namespace std;
	vector<double> data;
	double temp;

	cout << "수들을 입력하십시오(끝내려면 <=0):\n";
	while (cin >> temp && temp > 0)
		data.push_back(temp);
	sort(data.begin(), data.end());
	int size = data.size();

	valarray<double> num(size);
	int i;
	for (i = 0; i < size; i++)
		num[i] = data[i];

	valarray<double> sq_num(size);
	sq_num = sqrt(num);

	valarray<double> result(size);
	result = num + 2.0 * sq_num;

	cout.setf(ios_base::fixed);
	cout.precision(4);
	for (i = 0; i < size; i++) {
		cout.width(8);
		cout << num[i] << ": ";
		cout.width(8);
		cout << result[i] << endl;
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}
