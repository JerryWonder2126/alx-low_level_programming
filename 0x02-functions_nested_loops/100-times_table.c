#include "main.h"

/**
 * print_times_table - print the time table from 0 to n
 */
void print_times_table(int n)
{
	int num, mult, prod;

	for (num = 0; num <= n; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
