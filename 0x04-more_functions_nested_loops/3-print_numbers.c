#include "main.h"

/**
 * print_numbers - prints all numbers from 0 to 9
 */
void print_numbers(void)
{
	char n = 0;
	
	while (1)
	{
		_putchar(++n);
		if (n == 9)
			break;
	}

	_putchar('\n');
}
