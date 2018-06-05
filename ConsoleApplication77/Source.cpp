#include<stdlib.h>
#include<iostream>
#include<time.h>
using namespace std;	
int main()
{
	int task;
	cin >> task;
	srand(time(NULL));
	if (task == 1)
	{
		/*1.	Дано целое число А.Проверить истинность высказывания : «Число А является положительным»*/
		int a;
		cin >> a;
		if (a >= 0)
		{
			cout << "a polozhitelnoe chislo" << endl;
		}
		else
		{
			cout << "a otricatelnoe chislo" << endl;
		}
	}
	if (task == 2)
	{
		/*2.	Дано целое число А.Проверить истинность высказывания : «Число А является четным»*/
		int a;
		a = 1 + rand() % 99;
		if (a % 2 == 0)
		{
			cout << "a chetnoe" << endl;
		}
		else
		{
			cout << "a ne chetnoe" << endl;
		}
	}
	if (task == 3)
	{
		/*3.	Даны два целых числа : А, В.Проверить истинность высказывания : «Число А является нечетным»*/
		int a,b;
		a = 1 + rand() % 99;
		b = 1 + rand() % 99;
		if (a % 2 != 0&&b%2==0)
		{
			cout << "a nechetnoe" << endl;
		}
		else
		{
			cout << "uslovie ne vypolnyetcya" << endl;
		}
		cout << a << endl;
		cout << b << endl;
	}
	if (task == 4)
	{
		/*4.	Даны два целых числа : А, В.Проверить истинность высказывания : «Справедливы неравенства А>2 и В <= 3»*/
		int a, b;
		a = 1 + rand() % 99;
		b = 1 + rand() % 99;
		if (a > 2 && b <=3)
		{
			cout << "vyskazyvanie spravedlivo" << endl;
		}
		else
		{
			cout << "vyskazyvanie nespravedlivo" << endl;
		}
		cout << a << endl;
		cout << b << endl;
	}
	if (task == 5)
	{
		/*5.	Даны два целых числа : А, В.Проверить истинность высказывания : «Справедливы неравенства А>0 или В < -2»*/
		
		int a, b;
		a = -100 + rand() % 200;
		b = -100 + rand() % 200;
		if (a > 0 || b <= -2)
		{
			cout << "vyskazyvanie spravedlivo" << endl;
		}
		else
		{
			cout << "vyskazyvanie nespravedlivo" << endl;
		}
		cout << a << endl;
		cout << b << endl;
	}
	if (task == 6)
	{
		/*6.	Даны три целых числа : А, В, С.Проверить истинность высказывания : «Справедливо двойное неравенство А<В<С»*/
		int a, b,c;
		a = -100 + rand() % 200;
		b = -100 + rand() % 200;
		c = -100 + rand() % 200;
		if (a<b&&b<c)
		{
			cout << "vyskazyvanie spravedlivo" << endl;
		}
		else
		{
			cout << "vyskazyvanie nespravedlivo" << endl;
		}
		cout << a << endl;
		cout << b << endl;
		cout << c << endl;
	}
	if (task == 7)
	{/*
		7.	Даны три целых числа : А, В, С.Проверить истинность высказывания : «Число В находиться между А и С»*/
		int a, b, c;
		a = -100 + rand() % 200;
		b = -100 + rand() % 200;
		c = -100 + rand() % 200;
		if (a<b&&b<c)
		{
			cout << "vyskazyvanie spravedlivo" << endl;
		}
		else
		{
			cout << "vyskazyvanie nespravedlivo" << endl;
		}
		cout << a << endl;
		cout << b << endl;
		cout << c << endl;
	}
	if (task == 8)
	{
		/*8.	Даны два целых числа : А, В.Проверить истинность высказывания : «Каждое из чисел А и В нечетное»*/
		int a, b;
		a = -100 + rand() % 200;
		b = -100 + rand() % 200;
		
		if (a%2!=0&&b%2!=0)
		{
			cout << "vyskazyvanie spravedlivo" << endl;
		}
		else
		{
			cout << "vyskazyvanie nespravedlivo" << endl;
		}
		cout << a << endl;
		cout << b << endl;
		
	}
	if (task == 9)
	{
		/*9.	Даны два целых числа : А, В.Проверить истинность высказывания : «Хотя бы одно из чисел А и В нечетное»*/
		int a, b;
		a = -100 + rand() % 200;
		b = -100 + rand() % 200;

		if (a % 2 != 0 || b % 2 != 0)
		{
			cout << "vyskazyvanie spravedlivo" << endl;
		}
		else
		{
			cout << "vyskazyvanie nespravedlivo" << endl;
		}
		cout << a << endl;
		cout << b << endl;

	}
	if (task == 10)
	{
		/*10.	Даны два целых числа : А, В.Проверить истинность высказывания : «Ровно одно из чисел А и В нечётное»*/
		int a, b;
		a = -100 + rand() % 200;
		b = -100 + rand() % 200;

		if (a % 2 != 0 && b % 2 == 0|| a % 2 == 0 && b % 2 != 0)
		{
			cout << "vyskazyvanie spravedlivo" << endl;
		}
		else
		{
			cout << "vyskazyvanie nespravedlivo" << endl;
		}
		cout << a << endl;
		cout << b << endl;

	}
	if (task == 11)
	{
		/*11.	Даны два целых числа : А, В.Проверить истинность высказывания : «Числа А и В имеют одинаковую четность»*/
		int a, b;
		a = -100 + rand() % 200;
		b = -100 + rand() % 200;

		if (a % 2 == 0 && b % 2 == 0 || a % 2 != 0 && b % 2 != 0)
		{
			cout << "vyskazyvanie spravedlivo" << endl;
		}
		else
		{
			cout << "vyskazyvanie nespravedlivo" << endl;
		}
		cout << a << endl;
		cout << b << endl;
	

	}
	if (task == 12)
	{
		/*12.	Даны три целых числа : А, В, С.Проверить истинность высказывания : «Каждое из чисел А, В, С положительное»*/
		int a, b, c;
		a = -100 + rand() % 200;
		b = -100 + rand() % 200;
		c = -100 + rand() % 200;

		if (a >= 0 && b >= 0 && c >= 0)
		{
			cout << "vyskazyvanie spravedlivo" << endl;
		}
		else
		{
			cout << "vyskazyvanie nespravedlivo" << endl;
		}
		cout << a << endl;
		cout << b << endl;
	}
	if (task == 13)
	{
		/*13.	Даны три целых числа : А, В, С.Проверить истинность высказывания : «Хотя бы одно из чисел А, В, С положительное»*/
		int a, b, c;
		a = -100 + rand() % 200;
		b = -100 + rand() % 200;
		c = -100 + rand() % 200;

		if (a >= 0 || b >= 0 || c >= 0)
		{
			cout << "vyskazyvanie spravedlivo" << endl;
		}
		else
		{
			cout << "vyskazyvanie nespravedlivo" << endl;
		}
		cout << a << endl;
		cout << b << endl;
	}
	if (task == 14)
	{
		/*14.	Даны три целых числа : А, В, С.Проверить истинность высказывания : «Ровно одно из чисел А, В, С положительное*/
		int a, b, c;
		a = -100 + rand() % 200;
		b = -100 + rand() % 200;
		c = -100 + rand() % 200;

		if (a >= 0 && b < 0 && c < 0 || a < 0 && b >= 0 && c < 0 || a < 0 && b < 0 && c >= 0)
		{
			cout << "vyskazyvanie spravedlivo" << endl;
		}
		else
		{
			cout << "vyskazyvanie nespravedlivo" << endl;
		}
		cout << a << endl;
		cout << b << endl;
	}
	if (task == 15)
	{
		/*15.	Даны три целых числа : А, В, С.Проверить истинность высказывания : «Ровно два из чисел А, В, С являются положительными»*/
		int a, b, c;
		a = -100 + rand() % 200;
		b = -100 + rand() % 200;
		c = -100 + rand() % 200;

		if (a < 0 && b >= 0 && c >= 0 || a >= 0 && b < 0 && c >= 0 || a >= 0 && b >= 0 && c < 0)
		{
			cout << "vyskazyvanie spravedlivo" << endl;
		}
		else
		{
			cout << "vyskazyvanie nespravedlivo" << endl;
		}
		cout << a << endl;
		cout << b << endl;
	}


}