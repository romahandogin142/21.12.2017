#include <iostream>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
using namespace std;

void firstNum(int num)
{
	int b, max = 0, sum = 0;
	bool indic = false;

	cout << "Вывод в обратном порядке: ";

	if (num > 5) indic = true;

	while (num > 0)
	{
		b = num % 10;

		if (max < b) max = b;
		if (indic == true) sum += b;

		num /= 10;

		cout << b;
	}

	cout << "\nПервой цифрой является: " << b << endl;
	cout << "\nНаибольшая цифра равна: " << max << endl;
	if (indic == true) cout << "\nСумма цифр числа равна: " << sum << endl;

}

int reverse(int n)
{
	int newn = 0, k;
	while (n > 0) {
		k = n % 10;
		newn = newn * 10 + k;
		n /= 10;
	}
	return newn;
}

int k(int a) // функция возвращает куб
{
	return a*a*a;
}

void main()
{

	setlocale(LC_ALL, "Rus");
	int tm, nz;
	do
	{
		system("cls");
		cout << "Введите номер задания: " << endl;
		cout << " Что бы выйти введите '999'" << endl;
		cin >> tm;
		switch (tm)
		{

	

		case 2:
		{
			/* Задано натуральные числа от 10 до N. Найти наибольшую цифру целого десятичного числа.*/
			int n, s = 0;
			cin >> n;
			while (n > 0)
			{
				s += n % 10;
				n = n / 10;
			}
			cout << " Otvet   "<<s << endl;
			system("pause");
		}
		break;

		case 3:
		{
			/* Задано натуральные числа от 10 до N. Для натурального числа найти первую цифру и сумму его цифр*/

			int number, boof;

			cin >> number;

			firstNum(number);
			system("pause");
		}
		break;

		case 4:
		{
			/* Определить, является ли целое число симметричным, т. е. таким числом, которое одинаково читается слева направо и справа налево (палиндром, перевертыш).
			Например, числа 123321, 202, 9889, 5555*/
			int num, newnum;
			cout << "Vvedit chuslo:" << endl;
			cin >> num;
			newnum = num;
			if (reverse(newnum) == num)
				cout << "Palindrom  ";
			else cout << "Ne palindrom  " << endl;
			system("pause");
		}
		break;

		case 5:
		{
			/* Вывести сумму квадратов чисел от 12 до 80 по 1- числу в строке.*/

			long a, b, i, sum = 0;
			for (i = 12; i <= 80; i++)
			{
				sum = sum + (i*i);
			}
			cout << "Otvet "<<sum<<endl;
			system("pause");
		}
		break;

		case 6:
		{
			/* Вывести разность квадратов чисел от 22 до 88 по 1- числу в строке.*/

			int x, y, sum, pr, razn, chastn;
			cout << "Vedite dva chisla  ";
			cin >> x >> y;
			sum = x + y;
			pr = x * y;
			razn = x - y;
			chastn = x / y;
			cout << "Summa   " << sum << "      Proizvedenie" << pr<<endl;
			cout << " Raznosti " << razn << "     Castnoe " << chastn << endl;
			system("pause");
		}
		break;

		case 7:
		{
			/* Дано вещественное число A и натуральные числа от 1 до N (> 0). Найти разности квадратов A и натуральных чисел N .*/
			int n, sum;

			cout << "Vedite n: ";
			cin >> n;

			for (int i(1); i < n; i++) {
				for (int j(i); j < n; j++) {
					sum = k(i) + k(j);
					if (sum > n) break;
					else cout << i << " 3 + " << j << "  3 = " << sum << endl;
				}
			}

			system("pause > nul");
		}
		break;

		case 8:
		{
			/* Задано натуральные числа от 10 до N. Найти наименьшую цифру целого десятичного числа*/
			int n, s = 0;
			cin >> n;
			while (n > 0)
			{
				s += n % 10;
				n = n / 10;
			}
			cout << "Otvet  "<<s << endl;
			system("pause");
		}
		break;

		case 9:
		{
			/* Известно количество очков, набранных каждой из 20-ти команд-участниц первенства по футболу.
			Перечень очков дан в порядке убывания (ни одна пара команд не набрала одинаковое количество очков).
			Определить, какое место заняла команда, набравшая N очков (естественно, что значение N имеется в перечне). Условный оператор не использовать.
			a.	в каком году урожайность превысит 22 центнера с гектара;
			b.	в каком году площадь участка станет больше 120 гектаров;
			c.	в каком году общий урожай, собранный за все время, начиная с первого года, превысит 800 центнеров
			*/
			const unsigned SIZE = 3;
			int teams[SIZE];

			for (unsigned i = 0; i < SIZE; ++i)
			{
				std::cout << "Input points team : "; std::cin >> teams[i];
			}

			int min = teams[0];
			unsigned number = 0;
			for (unsigned i = 0; i < SIZE; ++i)
				if (min > teams[i])
				{
					min = teams[i];
					number = i;
				}

			std::cout << "Team number " << number + 1 << " is lost" << std::endl;

			system("PAUSE");

		}
		break;

		case 10:
		{
			/* 10.	Дано натуральное число n (n<9999). Найти предпоследнюю цифру числа (в предположении, что n>10).*/
			int a, d, q;
			double r;

			cin >> a >> d;
			cout << "Chastnoe:   " << a / d << "\n";
			cout << "Ostatok:    " << a%d;

			system("pause");
		}
		break;

		case 11:
		{
			/*Даны числа от 1 до 1000 и число m. Вывести все остатки от деления четных сотен на число m.*/
			int A = 1000, B = A, res = 0;
			res += B % 10;
			B = B / 10;
			while (B) {
				res *= B % 10;
				B = B / 10;
			}
			cout << "Otvet  A =: " << A<<endl;
			cout << "Proizvedenie ego chisel: " << res << endl;
			if (A > res) cout << A << " > " << res;
			else if (A < res) cout << A << " < " << res;
			else cout << A << " = " << res;
			system("pause");
		}
		break;

		}

	} while (tm != 999);



}
