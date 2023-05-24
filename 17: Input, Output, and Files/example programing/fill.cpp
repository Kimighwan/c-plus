#include <iostream>
int main() {
	using namespace std;
	cout.fill('*');
	const char* staff[2] = { "김익환" , "김국환" };
	long bouns[2] = { 900, 1350 };

	for (int i = 0; i < 2; i++) {
		cout << staff[i] << ": $";
		cout.width(7);
		cout << bouns[i] << endl;
	}

	return 0;
}
