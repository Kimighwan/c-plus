#include <iostream>
#include <string>
using namespace std;

void strcount(const string str);

int main() {
	string input;

	cout << "영문으로 한 행을 입력하십시오:\n";
	
	while (1)
	{
		getline(cin, input);
		if (input == "")
			break;
		strcount(input);
		cout << "다음 행을 입력하시오(끝내려면 빈 행을 입력):\n";
	}
	cout << "종료합니다,";
	return 0;
}

void strcount(const string str)
{
	static int total = 0;
	int count = 0;

	cout << "\"" << str << "\"에는 ";
	count = str.size();
	total += count;
	cout << count << "개의 문자가 있습니다,\n";
	cout << "지금까지 총 " << total << "개의 문자를 입력하셨습니다.\n";
}
