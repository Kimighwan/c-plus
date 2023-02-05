#include <iostream>
#include <string>
int main() {
	using namespace std;
	cout << "단어 하나를 입력하십시오: ";
	string word;
	cin >> word;

	char temp;
	int i, j;
	for (int j = 0, i = word.size() - 1; j < i; --i, j++) {
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
		cout << word;
	return 0;
}
