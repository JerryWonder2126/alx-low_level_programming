#include "main.h"

/**
 * print_line - prints '_' n times
 *
 * @n: number of times for '_' to be printed
 */
void print_diagonal(int n)
{
	int i, b;

	if (n > 0)
	{
		while (i < n)
		{
			b = i;
			while (b > 0)
			{
				_putchar(' ');
				b--;
			}

			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}

	_putchar('\n');
}
