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
		
	}

	case 3:
	{
		/*3.	Дано трехзначное число.Определить:
		a.является ли сумма его цифр двухзначным числом;
		b.является ли произведение его цифр трехзначным числом*/
		int n, t;
		system("cls");
		cout << "Введите трёх значное число = ";
		cin >> n;
		if ((n >= 100) && (n <= 999))
		{
		t= (n / 100) * (n / 10 * 10) * (n * 10);
			cout << "является произведением чисел "<<t << endl;
		}
		else if ((t >= 100) && (t <= 999));
		{
			cout << "Сумма двузначна  " << endl;
		}
		break;
	}
	case 5:
	{
		/* Написать программу, которая при вводе числа в диапазоне от 1 до 20 добавляет к нему слово "рубль" в правильной форме. Например, 1 рубль, 2 рубля, 5 рублей */
		cout << "Введите число от 1 до 20 : ";
		int a;
		cin >> a;
		
		
			switch (a)
			{
			case 1:

				cout << a << " рубль" << endl;
				break;

			case 2:
			case 3:
			case 4:

				cout << a << " рубля" << endl;
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

				cout << a << " рублей" << endl;
				break;

			default:
				cout << "Вы ввели не правильное число" << endl;
				break;
			}

		
			/*if (a == 1)
				cout << a << " рубль" << endl;
			else if (2 < a && 4 < a)
				cout << a << " рубля" << endl;
			else if ((4 < a) && (a < 20))
				cout << a << " рублей" << endl;
			else
				cout << "Вы ввели не правильное число" << endl;*/
		
		break;
	}
	case 6:
	{
		int a;
		cout << "Введите число от 1 до 31 : ";
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
			cout << "Осталось до полнолуния " << op << endl;
			cout << "Осталось до новолуния " << on << endl;
		}
		else if (a == 24)
		{
			int on = a - sn;
			cout << "Сегодня полнолуние "<< endl;
			cout << "До новолуния " << on<< endl;
		}
		else if (a >= 25)
		{
			cout << "Сегодня новолуние " << endl;
			cout << "До полнолуния " <<ossp<< endl;
		}
		else if (a > 25 && a < 31)
		{
			int ossn = ossp + 1;
			cout << "Осталось до полнолуния " << ossp << endl;
			cout << "Осталось до новолуния " << ossn << endl;
		}

		break;
	}
	case 7:
		/*Написать программу, которая по коду города и длительности переговоров вычисляет их стоимость и результат выводит на экран: Алматы-код 7272,
		25тенге; Шымкент-код 7252, 18тенге; Астана-код 7172 13тенге; Актау-код 7292, 11тенге.*/
		int kod;
		cout << "Введите код города : ";
		cin >> kod;

	default:
	{
		cout << "Такого задания нету! " << endl;
	}
	break;
	}



}
