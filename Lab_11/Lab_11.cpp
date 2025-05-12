#include <iostream>
#include "stack.h"
#include "queue.h"

using namespace std;

int main()
{
	Stack A, B, C;
	int N;

	for (int i = 0; i < 10; i++)
	{
		A.push(i);
	}

	cout << "A: ";
	A.view();

	cout << "top : " << A.top() << endl;

	for (int i = 0; i < 10; i++)
	{
		N = A.top();
		A.pop();

		if (N % 2 == 0)
		{
			B.push(N);
		}
		else
		{
			C.push(N);
		}
	}

	cout << "B: ";
	B.view();
	cout << "C: ";
	C.view();

	//test

	B.pop();
	C.push(-1);

	cout << "B: ";
	B.view();
	cout << "C: ";
	C.view();

	while (!B.empty() || !C.empty())
	{
		if (B.empty())
		{
			N = C.top();
			C.pop();
		}
		else if (C.empty())
		{
			N = B.top();
			B.pop();
		}
		else if (B.top() > C.top())
		{
			N = C.top();
			C.pop();
		}
		else
		{
			N = B.top();
			B.pop();
		}

		A.push(N);
	}

	cout << "A: ";
	A.view();
}
