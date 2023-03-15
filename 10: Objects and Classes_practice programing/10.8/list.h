#ifndef LIST_H
#define LIST_H
typedef double Item;
class List {
private:
	enum { MAX = 10 };
	Item* items;
	int top, max;
public:
	List(int num = MAX);
	~List();
	bool isempty() const;
	bool isfull() const;
	bool add(Item& item);
	void show()const;
	void visit(void (*pf) (Item&));
};
#endif
