#include "queue.h"

Queue::Queue()
{
	Head = nullptr;
	Tail = nullptr;
}

Queue::~Queue()
{
	Head = Head->clear(Head);
	Tail = nullptr;
}

void Queue::enque(int x)
{
	if (Head == nullptr)
	{
		Tail = Tail->enque(Tail, x);
		Head = Tail;
	}
	else
	{
		Tail =Tail->enque(Tail, x);
	}
}

void Queue::enque(Queue& Q2)
{
	Tail = Tail->enque(Tail, Q2.Head);

	Tail = Q2.Tail;

	Q2.Tail = nullptr;
	Q2.Head = nullptr;
}

void Queue::deque()
{
	if (Head == Tail)
	{
		Head = Head->deque(Head);
		Head = nullptr;
	}
	else
	{
		Head = Head->deque(Head);
	}
}

int Queue::first()
{
	return Head->first(Head);
}

int Queue::last()
{
	return Tail->last(Tail);
}

bool Queue::empty()
{
	return Head->empty(Head);
}

void Queue::view()
{
	Head->view(Head);
}
