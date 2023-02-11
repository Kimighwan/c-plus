#include <iostream>
#include <cctype>
using namespace std;
int main() {
	char ch;
	cout << "영문자를 입력하십시오(끝낼려면 @를 입력하시오.): ";
	cin.get(ch);

	while (ch != '@')
	{
		if (isalnum(ch))
		{
			if (isdigit(ch))
				;
			else if (isupper(ch))
				cout.put(tolower(ch));
			else
				cout.put(toupper(ch));
		}
		else
			cout.put(ch);
		cin.get(ch);
	}
	return 0;

}
