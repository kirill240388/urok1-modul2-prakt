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
		/*1.	���� ����� ����� �.��������� ���������� ������������ : ������ � �������� �������������*/
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
		/*2.	���� ����� ����� �.��������� ���������� ������������ : ������ � �������� ������*/
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
		/*3.	���� ��� ����� ����� : �, �.��������� ���������� ������������ : ������ � �������� ��������*/
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
		/*4.	���� ��� ����� ����� : �, �.��������� ���������� ������������ : ������������ ����������� �>2 � � <= 3�*/
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
		/*5.	���� ��� ����� ����� : �, �.��������� ���������� ������������ : ������������ ����������� �>0 ��� � < -2�*/
		
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
		/*6.	���� ��� ����� ����� : �, �, �.��������� ���������� ������������ : ������������ ������� ����������� �<�<ѻ*/
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
		7.	���� ��� ����� ����� : �, �, �.��������� ���������� ������������ : ������ � ���������� ����� � � ѻ*/
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
		/*8.	���� ��� ����� ����� : �, �.��������� ���������� ������������ : ������� �� ����� � � � ��������*/
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
		/*9.	���� ��� ����� ����� : �, �.��������� ���������� ������������ : ����� �� ���� �� ����� � � � ��������*/
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
		/*10.	���� ��� ����� ����� : �, �.��������� ���������� ������������ : ������ ���� �� ����� � � � ��������*/
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
		/*11.	���� ��� ����� ����� : �, �.��������� ���������� ������������ : ������ � � � ����� ���������� ���������*/
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
		/*12.	���� ��� ����� ����� : �, �, �.��������� ���������� ������������ : ������� �� ����� �, �, � �������������*/
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
		/*13.	���� ��� ����� ����� : �, �, �.��������� ���������� ������������ : ����� �� ���� �� ����� �, �, � �������������*/
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
		/*14.	���� ��� ����� ����� : �, �, �.��������� ���������� ������������ : ������ ���� �� ����� �, �, � �������������*/
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
		/*15.	���� ��� ����� ����� : �, �, �.��������� ���������� ������������ : ������ ��� �� ����� �, �, � �������� ��������������*/
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