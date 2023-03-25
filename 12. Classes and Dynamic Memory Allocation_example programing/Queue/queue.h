#ifndef QUEUE_H
#define QUEUE_H
class Customer {
private:
	long arrive; //고객이 큐에 도착한 시간
	int processtime; //고객이 거래를 처리하는 시간
public:
	Customer() { arrive = processtime = 0; }
	void set(long when); // when은 고객이 도착한 시간
	long when() const { return arrive; }
	int ptime() const { return processtime; }
};

typedef Customer Item;

class Queue {
private:
	struct Node { Item item; struct Node* next; };
	enum { Q_SIZE = 10};
	Node* front; //머리
	Node* rear; //꼬리 
	int items; //Queue에 있는 현재 항목 수
	const int qsize; // Queue에 넣을 수 있는 최대 항목 수
	Queue(const Queue& q) : qsize(0) {} //qs한계를 가진 Queue를 생성
	Queue& operator=(const Queue& q) { return *this; }
public:
	Queue(int qs = Q_SIZE);
	~Queue();
	bool isempty() const;
	bool isfull() const;
	int queuecount() const;
	bool enqueue(const Item& item);
	bool dequeue(Item& item);
};
#endif 
