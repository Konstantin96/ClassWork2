#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <conio.h>
#include <Windows.h>
#include <time.h>

enum qwert
{
	����������� =1,
	�������,
	�����,
	�������,
	�������,
	�������,
	�����������
};

using namespace std;

int main()
{
start:
	setlocale(LC_ALL, "Rus");


	HANDLE Hconsole;

	Hconsole = GetStdHandle(STD_OUTPUT_HANDLE);

	srand(time(NULL));
	int rnd = 1 + rand() % 250;
	int rn = 58;

	SetConsoleTextAttribute(Hconsole, rn);

	int nz;
	cout << "������� ����� �������: ";
	cin >> nz;


	switch (nz)
	{
	case 1:
	{
		// ���� ����������� �����.����������: �) ������ �� � ���� ����� 3 � 7; �) ������ �� � ���� �����(4 � 8) ��� ����� 9.
	zd1:
		int x, y, z;
		system("cls");
		cout << "������� ���� ������� ����� = ";
		cin >> x;
		y = x * 10;
		z = x / 10;
		if (x < 10 && x > 100)
		{

			cout << "������� ���� ������� ����� = ";
			goto zd1;
		}
		if ((y == 3) || (z == 3) || (y == 7) || (z == 7))
			cout << "� ����� ������ ����� 3 ��� 7" << endl;
		else if ((y == 4) || (z == 4) || (y == 8) || (z == 8) || (y == 9) || (z == 9))
			cout << "� ����� ������ ����� 4,8 ��� 9" << endl;
		else
			cout << "------------------------------------" << endl;
		break;
	}

	case 2:
	{
		//  ���� ����� ����� �� 1 �� 365. ����������, ����� ���� ������ �������� �� ��� �����, ���� 1 ������ � �����������
		int a;
		cout << "������ ����� �� 1 �� 365 : ";
		cin >> a;
		if (1 < a && a < 366)
		{
			int b;
			enum qwert q;

			q = (qwert)b;

			switch (q)
			{
			case �����������:
			{
				cout << "Ponedelnik";
			}
			break;
			case �������:
				break;
			case �����:
				break;
			case �������:
				break;
			case �������:
				break;
			case �������:
				break;
			case �����������:
				break;
			default:
				break;
			}
		}
		
	}

	case 3:
	{
		/*3.	���� ����������� �����.����������:
		a.�������� �� ����� ��� ���� ����������� ������;
		b.�������� �� ������������ ��� ���� ����������� ������*/
		int n, t;
		system("cls");
		cout << "������� ��� ������� ����� = ";
		cin >> n;
		if ((n >= 100) && (n <= 999))
		{
		t= (n / 100) * (n / 10 * 10) * (n * 10);
			cout << "�������� ������������� ����� "<<t << endl;
		}
		else if ((t >= 100) && (t <= 999));
		{
			cout << "����� ���������  " << endl;
		}
		break;
	}
	case 5:
	{
		/* �������� ���������, ������� ��� ����� ����� � ��������� �� 1 �� 20 ��������� � ���� ����� "�����" � ���������� �����. ��������, 1 �����, 2 �����, 5 ������ */
		cout << "������� ����� �� 1 �� 20 : ";
		int a;
		cin >> a;
		
		
			switch (a)
			{
			case 1:

				cout << a << " �����" << endl;
				break;

			case 2:
			case 3:
			case 4:

				cout << a << " �����" << endl;
				break;

			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:

				cout << a << " ������" << endl;
				break;

			default:
				cout << "�� ����� �� ���������� �����" << endl;
				break;
			}

		
			/*if (a == 1)
				cout << a << " �����" << endl;
			else if (2 < a && 4 < a)
				cout << a << " �����" << endl;
			else if ((4 < a) && (a < 20))
				cout << a << " ������" << endl;
			else
				cout << "�� ����� �� ���������� �����" << endl;*/
		
		break;
	}
	case 6:
	{
		int a;
		cout << "������� ����� �� 1 �� 31 : ";
		cin >> a;
		int l = 28;
		int pp = 27;
		int sp = 1 + pp - 31;
		int sn = 1 + pp - 31 + 1;
		int ssp = sp + l - 31;
		int ossp = 31 - a + ssp;

		if (1 < a&&a < 24)
		{
			int op = a - sp;
			int on = a - sn;
			cout << "�������� �� ���������� " << op << endl;
			cout << "�������� �� ��������� " << on << endl;
		}
		else if (a == 24)
		{
			int on = a - sn;
			cout << "������� ���������� "<< endl;
			cout << "�� ��������� " << on<< endl;
		}
		else if (a >= 25)
		{
			cout << "������� ��������� " << endl;
			cout << "�� ���������� " <<ossp<< endl;
		}
		else if (a > 25 && a < 31)
		{
			int ossn = ossp + 1;
			cout << "�������� �� ���������� " << ossp << endl;
			cout << "�������� �� ��������� " << ossn << endl;
		}

		break;
	}
	case 7:
		/*�������� ���������, ������� �� ���� ������ � ������������ ����������� ��������� �� ��������� � ��������� ������� �� �����: ������-��� 7272,
		25�����; �������-��� 7252, 18�����; ������-��� 7172 13�����; �����-��� 7292, 11�����.*/
		int kod;
		cout << "������� ��� ������ : ";
		cin >> kod;

	default:
	{
		cout << "������ ������� ����! " << endl;
	}
	break;
	}



}
