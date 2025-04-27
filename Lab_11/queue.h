#include "node.h"

struct Queue
{
	Node* Head;
	Node* Tail;

	Queue();
	~Queue();

	void enque(int x);

	void enque(Queue& Q2);

	void deque();

	int first();

	int last();

	bool empty();

	void view();
};
