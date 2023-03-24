#include <iostream>
#include "string.h"
const int ArSize = 10;
const int MaxLen = 81;
int main() {
	using std::cout;
	using std::cin;
	using std::endl;
	String name;
	cout << "안녕하십니까? 성함이 어떻게 되십니까?\n";
	cin >> name;

	cout << name<<" 씨! 간단한 영어 속담 " << ArSize << "갸만 입력해 주십시오(끝내려면 Enter):\n";
	String saying[ArSize];
	char temp[MaxLen];
	int i;
	for (i = 0; i < ArSize; i++)
	{
		cout << i + 1 << ": ";
		cin.get(temp, MaxLen);
		while (cin && cin.get() != '\n')
			continue;
		if (!cin || temp[0] == '\0')
			break;
		else
			saying[i] = temp;
	}
	int total = i;
	if (total > 0)
	{
		cout << "(다음과 같은 속담들을 입력하셨습니다.\n";
		for (i = 0; i < total; i++)
			cout << saying[i][0] << ": " << saying[i] << endl;
		int shortest = 0;
		int first = 0;
		for (i = 1; i < total; i++)
		{
			if (saying[i].length() < saying[shortest].length())
				shortest = i;
			if (saying[i] < saying[first])
				first = i;
		}
		cout << "가장 짧은 속담:\n" << saying[shortest] << endl;
		cout << "사전순으로 가장 앞에 나오는 속담:\n" << saying[first] << endl;
		cout << "이 프로그램은 " << String::HowMany() << "개의 String 객체를 사용하였습니다.\n";
	}
	else
		cout << "입력금지\n";
	return 0;
}
