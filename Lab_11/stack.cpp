#include "stack.h"

Stack::Stack()
{
	Top = nullptr;
}

Stack::~Stack()
{
	Top = Top->clear(Top);
}

void Stack::push(int x)
{
	Top = Top->push(Top, x);
}

void Stack::push(Stack& S2)
{
	Top = Top->push(Top, S2.Top);
	S2.Top = nullptr;
}

void Stack::pop()
{
	Top = Top->pop(Top);
}

int Stack::top()
{
	return Top->top(Top);
}

bool Stack::empty()
{
	return Top->empty(Top);
}

void Stack::view()
{
	Top->view(Top);
}
