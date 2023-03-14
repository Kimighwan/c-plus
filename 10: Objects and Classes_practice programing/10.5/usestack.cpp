#include <iostream>
#include "stack.h"
#include <cctype>
#include <cstring>
using namespace std;

int main() {
	Stack list;
	Item client;
	char c;
	static double income_total = 0.0;

	cout << "고객을 추가하려면 A, 고객을 삭제하려면 D, \n"
		<< "종료하려면 Q를 입력하십시오.\n";
	while (cin >> c && toupper(c) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(c))
		{
			cout << "\a";
			continue;
		}
			switch (c)
			{
			case 'A':
			case 'a':
				cout << "추가할 고객의 이름을 입력하십시오: ";
				cin.getline(client.fullname, 34);
				cout << "이 고객이 지불할 금액을 입력하십시오: ";
				cin >> client.payment;
				cin.clear();
				while (cin.get() != '\n')
					continue;
				if (list.isfull())
					cout << "스택이 가득 차 있습니다.\n";
				else
					list.push(client);
				break;
			case 'D':
			case 'd':
				if (list.isempty())
					cout << "스택이 비어 있습니다.\n";
				else
				{
					list.pop(client);
					cout << client.fullname << " 고객을 삭제했습니다.\n";
					income_total += client.payment;
					cout << "지금까지의 모든 고객이 지불한 총 금액은 " << income_total << "원입니다.\n";
				}
				break;
			}
			cout << "고객을 추가하려면 A, 고객을 삭제하려면 D, \n"
				<< "종료하려면 Q를 입력하십시오.\n";
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}
