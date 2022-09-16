#include "main.h"

/**
 * print_diagonal - prints '_' n times
 *
 * @n: number of times for '_' to be printed
 */
void print_diagonal(int n)
{
	int i, b;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			b = i;
			while (b > 0)
			{
				_putchar(' ');
				b--;
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
