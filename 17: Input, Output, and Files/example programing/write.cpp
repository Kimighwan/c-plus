#include <iostream>
#include <cstring>

int main() {
	using namespace std;
	const char* s1 = "BuSan";
	const char* s2 = "Seoul";
	const char* s3 = "Degu";
	int len = strlen(s2);
	cout << "루프 인덱스 증가:\n";
	int i;
	for (i = 0; i <= len; i++)
	{
		cout.write(s2, i);
		cout << endl;
	}
	cout << "루프 인덱스 감소:\n";
	for (i = len; i > 0; i--)
		cout.write(s2, i) << endl;
	cout << "문자열 길이 초과:\n";
	cout.write(s2, len + 5) << endl;
	return 0;
}
