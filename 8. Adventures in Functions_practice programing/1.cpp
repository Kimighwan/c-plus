#include <iostream>
using namespace std;
const int SIZE = 20;
void show_str(char* str, int n = 0);
int main() {
	cout << "문자열을 입력하시오: ";
	char str[SIZE];
	cin.getline(str, SIZE);

	show_str(str);
	show_str(str, 1);
	show_str(str, 2);

	for (int i = 0; i < 3; i++)
		show_str(str, 50);

	show_str(str);
	show_str(str, 100);

	return 0;
}

void show_str(char* str, int n) {
	static int count = 0;
	if (n == 0)
	{
		count++;
		cout << count << "번 째 호출: " << str << endl;
	}
	else
	{
		count++;
		for (int i = 0; i < count; i++)
			cout << count << "번 째 호출: " << str << endl;
	}

}
