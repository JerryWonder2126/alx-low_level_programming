#include "main.h"

/**
 * more_numbers - print numbers from 0 - 14, 10 times
 */
void more_numbers(void)
{
	int i, f;

	for (i = 0; i < 10; i++)
	{
		for (f = 0; f <= 14; f++)
		{
			if ( f >= 10)
				_putchar(f / 10 + '0');
			_putchar(f % 10 + '0');
		}

		_putchar('\n');
	}
}

