#include "node.h"
#include <iostream>

Node* Node::push(Node* T, int x)
{
	Node* temp =  new Node(x);

	if (T)
	{
		temp->next = T;
		T = temp;
	}
	else
	{
		T = temp;
	}

	return T;
}

Node* Node::push(Node* T1, Node* T2)
{
	Node* temp = T2;

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = T1;

	T1 = T2;

	T2 = nullptr;

	return T1;
}

Node* Node::pop(Node* T)
{
	if (T)
	{
		if (T->next)
		{
			Node* temp = T;

			T = T->next;

			delete temp;
		}
		else
		{
			delete T;

			return nullptr;
		}
	}

	return T;
}

int Node::top(Node* T)
{
	return T->data;
}

void Node::view(Node* T)
{
	Node* temp = T;

	while (temp)
	{
		std::cout << temp->data << ' ';
		temp = temp->next;
	}

	std::cout << std::endl;

	delete temp;
}

bool Node::empty(Node* T)
{
	return !T;
}

Node* Node::clear(Node* T)
{
	while (T)
	{
		T = T->pop(T);
	}

	return nullptr;
}

Node* Node::enque(Node* T, int x)
{
	if (T)
	{
		T->next = new Node(x);
		T = T->next;
	}
	else
	{
		T = new Node(x);
	}

	return T;
}

Node* Node::enque(Node* T1, Node* H2)
{
	T1->next = H2;

	H2 = nullptr;

	return T1;
}

Node* Node::deque(Node* H)
{
	if (H)
	{
		if (H->next)
		{
			Node* temp = H;

			H = H->next;

			delete temp;
		}
		else
		{
			delete H;

			return nullptr;
		}
	}

	return H;
}

int Node::first(Node* H)
{
	return H->data;
}

int Node::last(Node* T)
{
	return T->data;
}