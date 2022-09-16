#include "main.h"

/**
 * print_square - prints a box of 'size' by 'size' dimension
 *
 * @size: the length and breadth of box
 */
void print_square(int size)
{
	int i, b;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}

			_putchar('\n');

		}
	}
	else
		_putchar('\n');
}
