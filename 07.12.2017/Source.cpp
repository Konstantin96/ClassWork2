#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <conio.h>
#include <Windows.h>
#include <time.h>

using namespace std;


int main()
{
start:
	setlocale(LC_ALL, "Rus");
	int nz;
	cout << "������� ����� �������: ";
	cin >> nz;
	HANDLE Hconsole;

	Hconsole = GetStdHandle(STD_OUTPUT_HANDLE);

	srand(time(NULL));
	int rnd = 1 + rand() % 250;
	int rn = 88;

	SetConsoleTextAttribute(Hconsole, rnd);

	switch (nz)
	{
	case 1:
	{

	}
	default:
	{
		cout << "������ ������� ����! " << endl;
	}
	break;
	}



}
