#include "Tqueue.h"
void main()
{
	setlocale(LC_ALL, "Russian");
	int comand;
	int len_q;
	double Pel;
	cout << "������� ����� �������: ";
	cin >> len_q;
	cout << endl;
	Tqueue <double> qu(len_q);
	for (int i = 0; i < len_q; i++)
		qu.Push((rand() % 100));
	for (;;)
	{
		cout << "������� ����������� ����������� ����� ������: ";
		cin >> Pel;
		if (Pel >= qu.Top())
		{
			cout << "������ " << qu.Pop() << " ���������" << endl;
			cout << "������ " << Pel << " ���������" << endl << endl;
			qu.Push(Pel);
		}
		else if (Pel < qu.Top())
			cout << "������� �����������" << endl << endl;
		cout << "������� 1, ���� ������ ���������� �� �������" << endl;
		cout << "������� 2, ���� ������ ���������� ������ ���������" << endl;
		cout << "������� 3, ���� ������ ����� �����������" << endl << endl;
		cout << "������� �������: ";
		cin >> comand;
		if (comand == 1)
			cout << qu;
		else if (comand == 2);
		else if (comand == 3)
			break;
		else cout << "�������� ����";
	}
}