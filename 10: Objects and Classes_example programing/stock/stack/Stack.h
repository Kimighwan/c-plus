#ifndef STACK_H
#define STACK_H

typedef unsigned long Item;

class Stack {
private:
	enum { MAX = 10 };
	Item items[MAX];
	int top;
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const Item& iten); // 가득 차 있으면 false, 아니먄 true
	bool pop(Item& item); // 비어 있으면 false, 아니면 true // 꼭대기 항목을 꺼내 item에 넣는다
};
#endif
