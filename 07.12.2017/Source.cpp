#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <conio.h>
#include <Windows.h>
#include <time.h>

enum qwert
{
	Понедельник =1,
	Вторник,
	Среда,
	Четверг,
	Пятница,
	Суббота,
	Воскресенье
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
	cout << "Введите номер задания: ";
	cin >> nz;


	switch (nz)
	{
	case 1:
	{
		// Дано двухзначное число.Определить: а) входят ли в него цифры 3 и 7; б) входят ли в него цифры(4 и 8) или цифра 9.
	zd1:
		int x, y, z;
		system("cls");
		cout << "Введите двух значное число = ";
		cin >> x;
		y = x * 10;
		z = x / 10;
		if (x < 10 && x > 100)
		{

			cout << "Введите двух значное число = ";
			goto zd1;
		}
		if ((y == 3) || (z == 3) || (y == 7) || (z == 7))
			cout << "В число входят цифры 3 или 7" << endl;
		else if ((y == 4) || (z == 4) || (y == 8) || (z == 8) || (y == 9) || (z == 9))
			cout << "В число входят цифры 4,8 или 9" << endl;
		else
			cout << "------------------------------------" << endl;
		break;
	}

	case 2:
	{
		//  Дано целое число от 1 до 365. Определить, какой день недели выпадает на это число, если 1 января – понедельник
		int a;
		cout << "Ввести число от 1 до 365 : ";
		cin >> a;
		if (1 < a && a < 366)
		{
			int b;
			enum qwert q;

			q = (qwert)b;

			switch (q)
			{
			case Понедельник:
			{
				cout << "Ponedelnik";
			}
			break;
			case Вторник:
				break;
			case Среда:
				break;
			case Четверг:
				break;
			case Пятница:
				break;
			case Суббота:
				break;
			case Воскресенье:
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
		cout << "Такого задания нету! " << endl;
	}
	break;
	}



}
