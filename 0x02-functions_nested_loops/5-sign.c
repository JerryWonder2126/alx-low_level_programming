#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: the number to be checked
 * Return: + if positive, - if negative and 0 if eqauls to 0
 */
int print_sign(int n)
{
	char p;
	int retval;

	if (n == 0)
	{
		p = '0';
		retval = 0;
	}
	else if (n > 0)
	{
		p = '+';
		retval = 1;
	}
	else
	{
		p = '-';
		retval = -1;
	}

	_putchar(p);

	return (retval);
}
