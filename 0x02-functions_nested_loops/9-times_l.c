#include "main.h"

/**
 * times_table - print the time table from 0 to 9
 */
void times_table(void)
{
	int c, i, j;

	for (c = 0; c < 10; c++)
	{
		j = 0;
		_putchar('0');
		for (i = 1; i < 10; i++)
		{
			_putchar(',');
			_putchar(' ');
			if (j < 10)
				_putchar(' ');
			else
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			j += c;
		}
		_putchar('\n');
	}
}
