#include "main.h"

/**
 * print_times_table - print the time table from 0 to n
 */
void print_times_table(int n)
{
	if (n <= 15 && n > 0)
	{
		int num, mult, prod;

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
				/*else
					_putchar((prod / 10) + '0');

				_putchar((prod % 10) + '0');*/
			}
			_putchar('\n');
		}
	}
}

/**
 * print_hundreds - prints integers that are in hundreds
 */
void print_int(int n)
{
	int d = n / 10;
	if (n / 10)
	{
		print_int(n / 10);
	}
	_putchar(n % 10 + '0');
}
