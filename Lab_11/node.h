#pragma once

struct Node
{
	int data;
	Node* next;

	Node() { data = 0; next = nullptr; }
	
	Node(int x) { data = x; next = nullptr; }

	Node* push(Node* T, int x);

	Node* push(Node* T1, Node* T2);

	Node* pop(Node* T);

	int top(Node* T);

	void view(Node* T);

	bool empty(Node* T);

	Node* clear(Node* T);

	//-----------------------------------

	Node* enque(Node* T, int x);

	Node* enque(Node* T1, Node* H2);

	Node* deque(Node* H);

	int first(Node* H);

	int last(Node* T);
};
