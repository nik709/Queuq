#include "Tqueue.h"
#include <cstdlib>
void main()
{
	setlocale(LC_ALL, "Russian");
	int comand;
	int len_q;
	cout << "¬ведите длину очереди: ";
	cin >> len_q;
	cout << endl;
	Tqueue <double> qu(len_q);
	double p,p1;
	double q,q1;
	cout<<"Vvedite p: ";
	cin>>p;
	cout<<"Vvedite q: ";
	cin>>q;
	cout<<endl<<"Comands:"<<endl;
	cout<<"1 - test"<<endl;
	cout<<"2 - posmotret' na ochered'"<<endl;
	cout<<"3 - exit"<<endl;
	for(;;)
	{
		cout<<endl<<"Vvedite comandu: ";
		cin>>comand;
		switch (comand)
		{
		case 1:
			{
				for (int i=0; i<10; i++)
				{
					p1=rand()%100;
					p1/=100;
					if (qu.IsFull())
						cout<<"FULL QUEUE"<<endl;
					else if (p1<p)
					{
						qu.Push(p1);
						cout<<"Dobavili zadachu "<<p1<<endl;
					}
					q1=rand()%100;
					q1/=100;
					if (qu.IsEmpty())
						cout<<"EMPTY QUEUE"<<endl;
					else if (q1<q)
					{
						cout<<"Vipolnili zadachu ";
						cout<<qu.Pop();
						cout<<endl;
					}
				}
				break;
			}
		case 2:
			{
				cout<<qu;
				break;
			}
		case 3:
			exit(1);
		}
	}
}