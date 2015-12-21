#pragma once
#include <iostream>

using namespace std;
template <class Type>
class Tqueue
{
private:
	int MaxSize;
	int begin;
	int end;
	int len;
	Type *mas;
public:
	Tqueue(int size = 10)
	{
		MaxSize = size;
		mas = new Type[MaxSize];
		begin = 0;
		end = -1;
		len = 0;
	}
	~Tqueue()
	{
		delete[]mas;
	}
	Tqueue(const Tqueue &q)
	{
		MaxSize = q.MaxSize;
		mas = new Type[MaxSize];
		begin = q.begin;
		end = q.end;
		len = q.len;
		for (int i = begin; i <= end; i++)
			mas[i] = q.mas[i];
	}
	void Push(const Type el)
	{
		if (end < MaxSize - 1)
			end++;
		else end = 0;
		mas[end] = el;
		len++;
	}
	bool IsEmpty()
	{
		return len == 0;
	}
	bool IsFull()
	{
		return len == MaxSize;
	}
	Type Pop()
	{
		Type tmp;
		if (IsEmpty())
		{
			cout << "Очередь пуста";
			throw - 1;
		}
		else
		{
			tmp = mas[begin];
			if (begin < MaxSize - 1)
				begin++;
			else begin = 0;
		}
		len--;
		return tmp;
	}
	Type Top()
	{
		if (IsEmpty())
		{
			cout << "Очереди пуста";
			throw - 1;
		}
		return mas[begin];
	}
	friend ostream& operator<<(ostream &out, const Tqueue <Type> &q)
	{
		out << "Максимальная длина очереди: " << q.MaxSize << '\n';
		out << "Начало очереди: " << q.begin << '\n';
		out << "Конец очереди: " << q.end << '\n';
		out << "Длина очереди: " << q.len << '\n';
		if (q.len == 0)
			out << "Очередь пуста\n";
		else
		{
			out << "Очередь: ";
			for (int i = 0; i < q.len; i++)
				out << q.mas[i] << " ";
			out << '\n';
			return out;
		}
	}
};