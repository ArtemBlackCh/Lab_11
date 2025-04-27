#include "node.h"

struct Stack
{
	Node* Top;

	Stack();
	~Stack();

	void push(int x);

	void push(Stack& S2);

	void pop();

	int top();

	bool empty();

	void view();
};
