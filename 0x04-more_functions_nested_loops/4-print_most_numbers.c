#include "main.h"

/**
 * print_most_numbers - prints all numbers from 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
	char n = '0';

	while (1)
	{
		if (n != '2' && n != '4')
			_putchar(n++);
		else
			n++;

		if (n > '9')
			break;
	}

	_putchar('\n');
}
