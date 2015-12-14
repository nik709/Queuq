#include "Tqueue.h"
void main()
{
	setlocale(LC_ALL, "Russian");
	Tqueue <int> queue(3);
	queue.Push(5);
	Tqueue <int> q(queue);
	cout << q.Top() << '\n';
	int elem = q.Pop();
}