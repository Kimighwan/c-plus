#include <cmath>
#include "exc_mean.h"
double hmean(double a, double b) throw(bad_hmean);
double gmean(double a, double b) throw(bad_gmean);
int main() {
	using std::cout;
	using std::cin;
	using std::endl;

	double x, y, z;

	cout << "두 수를 입력하십시오: ";
	while (cin >> x >> y)
	{
		try {
			z = hmean(x, y);
			cout << x << ", " << y << "의 조화평균은 " << z << "입니다.\n";
			cout << x << ", " << y << "의 기하평균은 " << gmean(x, y) << "입니다.\n";
			cout << "다른 두 수를 입력하십시오(끝내려면 q): ";
		}
		catch (bad_hmean& bh)
		{
			bh.mesg();
			cout << "다시 입력하십시오.\n";
			continue;
		}
		catch (bad_gmean& bg)
		{
			cout<<  bg.mesg();
			cout << "Values used: " << bg.v1 << ", " << bg.v2 << endl;
			cout << "죄송합니다. 더 이상 진행할 수 없습니다.\n";
			break;
		}
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}

double hmean(double a, double b) {
	if (a == -b)
		throw bad_hmean(a, b);
	return 2.0 * a * b / (a + b);
}

double gmean(double a, double b) {
	if (a < 0 || b < 0)
		throw bad_gmean(a, b);
	return std::sqrt(a * b);
}
