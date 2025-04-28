#include <iostream>
#include "stack.h"
#include "queue.h"

using namespace std;

int main()
{
	/*Stack A,B,C;

	int N;

	for (int i = 0; i < 10; i++)
	{
		A.push(i);
	}

	cout << "A: ";
	A.view();

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

	B.pop();

	C.push(-1);

	cout << "B: ";
	B.view();
	cout << "C: ";
	C.view();

	B.push(C);

	cout << "B: ";
	B.view();*/

	//----------------------------------

	Queue A,B,C;

	int N;

	for (int i = 0; i < 10; i++)
	{
		A.enque(i);
	}

	cout << "A: ";
	A.view();

	for (int i = 0; i < 10; i++)
	{
		N = A.first();
		A.deque();

		if (N % 2 == 0)
		{
			B.enque(N);
		}
		else
		{
			C.enque(N);
		}
	}

	cout << "B: ";
	B.view();
	cout << "C: ";
	C.view();

	B.enque(12);
	C.deque();

	cout << "B: ";
	B.view();
	cout << "C: ";
	C.view();

	B.enque(C);
	
	cout << "B: ";
	B.view();

}
