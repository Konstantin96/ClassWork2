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
		/*{
			int b = a % 7;
			switch (b)
	case 0:
			{
			default:
				break;
			}
		}*/
	}

	default:
	{
		cout << "������ ������� ����! " << endl;
	}
	break;
	}



}
