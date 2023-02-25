#include <iostream>
#include <string>
using namespace std;
void Change(string& str);

int main() {
	string str;
	while (1){
		cout << "문자열을 입력하시오(끝내려면 q): ";
		getline(cin, str);
		if (str.size() == 1 && str[0] == 'q')
		{
			cout << "종료합니다.";
			break;
		}
			
		Change(str);
	}
	return 0;
}

void Change(string& str) {
	for(int i=0; i<str.size(); i++)
		cout<<(char)toupper(str[i]);
}
