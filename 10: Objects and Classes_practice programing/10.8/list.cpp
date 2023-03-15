#include <iostream>
#include "list.h"

List::List(int num) {
	if (num > MAX)
		max = MAX;
	else
		max = num;
	items = new Item[max];
	top = 0;
}

List::~List() {
	delete[] items;
}

bool List::isempty() const {
	return top == 0;
}

bool List::isfull() const {
	return top == max;
}

bool List::add(Item& item) {
	if (top < max)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

void List::show()const {
	for (int i = 0; i < top; i++)
		std::cout << "항목" << i + 1 << " = " << items[i] << std::endl;
}

void List::visit(void (*pf) (Item&)) {
	for (int i = 0; i < top; i++)
		pf(items[i]);
}
