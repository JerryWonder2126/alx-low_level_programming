#include "main.h"

/**
 * print_times_table - print the time table from 0 to n
 * @n: number of multiples to print
 */
void print_times_table(int n)
{
	int num, mult, prod;

	if (n <= 15 && n > 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mult;

				if (prod <= 9)
					_putchar(' ');
				print_int(prod);
			}
			_putchar('\n');
		}
	}
}

/**
 * print_int - prints integers that are in hundreds
 * @n: integer to be printed
 */
void print_int(int n)
{
	if (n / 10)
	{
		print_int(n / 10);
	}
	_putchar(n % 10 + '0');
}
