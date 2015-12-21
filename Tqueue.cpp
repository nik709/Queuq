#include "Tqueue.h"
void main()
{
	setlocale(LC_ALL, "Russian");
	int comand;
	int len_q;
	double Pel;
	cout << "Введите длину очереди: ";
	cin >> len_q;
	cout << endl;
	Tqueue <double> qu(len_q);
	for (int i = 0; i < len_q; i++)
		qu.Push((rand() % 100));
	for (;;)
	{
		cout << "Введите вероятность поступления новой задачи: ";
		cin >> Pel;
		if (Pel >= qu.Top())
		{
			cout << "Задача " << qu.Pop() << " выполнена" << endl;
			cout << "Задача " << Pel << " послупила" << endl << endl;
			qu.Push(Pel);
		}
		else if (Pel < qu.Top())
			cout << "Очередь переполнена" << endl << endl;
		cout << "Введите 1, если хотите посмотреть на очередь" << endl;
		cout << "Введите 2, если хотите продолжить работу программы" << endl;
		cout << "Введите 3, если хотите выйти изпрограммы" << endl << endl;
		cout << "Введите команду: ";
		cin >> comand;
		if (comand == 1)
			cout << qu;
		else if (comand == 2);
		else if (comand == 3)
			break;
		else cout << "Неверный ввод";
	}
}