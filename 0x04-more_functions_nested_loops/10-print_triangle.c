#include "main.h"

/**
 * print_triangle - construct triangle based on size
 *
 * @size: size of triangle (base and height)
 */
void print_triangle(int size)
{
	int i, b, c;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			b = size - i;
			while (b > 0)
			{
				_putchar(' ');
				b--;
			}

			c = i;
			while (c > 0)
			{
				_putchar('#');
				c--;
			}

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
