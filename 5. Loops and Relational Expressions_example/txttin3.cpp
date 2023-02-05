#include <iostream>
#include <string>
int main() {
	using namespace std;
	cout << "단어 하나를 입력하십시오: ";
	int count = 0;
	string word;
	getline(cin, word);

	while (cin.fail() == false) {  //EOF인지 검사한다.
		cout << word;
		++count;
		getline(cin, word);
	}
	cout << count << " 문자를 읽었습니다.\n";
	return 0;
}
