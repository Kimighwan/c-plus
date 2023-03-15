#include <iostream>
#include "list.h"
using namespace std;

void square(Item& item);
void cube(Item& item);

int main() {
	List list(5);
	Item it;
	int count = 0;
	if (list.isempty())
	{
		cout << "현재 리스트가 비어 있습니다\n";
		cout << "리스트에 항목을 입력하십시오.\n";
		while (1)
		{
			if (list.isfull())
			{
				cout << "리스트가 가득 차서 더 이상 항목을 입력할 수 없습니다\n";
				break;
			}
			else
			{
				cout << "항목" << ++count << " = ";
				cin >> it;
				list.add(it);
			}
		}
	}
	cout << "현재 리스트입니다.\n";
	list.show();

	list.visit(square);
	cout << "제곱한 후의 리스트입니다.\n";
	list.show();

	list.visit(cube);
	cout << "세제곱한 후의 리스트입니다.\n";
	list.show();

	return 0;
}

void square(Item& it) {
	it = it * it;
}

void cube(Item& it) {
	it = it * it * it;
}
