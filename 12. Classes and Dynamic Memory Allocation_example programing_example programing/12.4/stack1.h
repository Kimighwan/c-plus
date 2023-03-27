#ifndef STACK1_H
#define STACK1_H
typedef unsigned long Item;
class Stack {
private:
	enum { MAX = 10 };
	Item* pitems; //스택 항목들을 저장
	int size; //스택에 들어있는 원소 수
	int top;
public:
	Stack(int n = MAX);
	Stack(const Stack& st);
	~Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const Item& item);
	bool pop(Item& item);
	Stack& operator=(const Stack& st);
};
#endif
