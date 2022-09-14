#include "main.h"

/**
 *jack_bauer - prints all possible version of the time
 */
void jack_bauer(void)
{
	int hrs, mins;

	for (hrs = 0; hrs < 24 ; hrs++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			print_tens(hrs);
			_putchar(':');
			print_tens(mins);

			_putchar('\n');
		}
	}
}

/**
 * print_tens - print integers greater than but less 100 with _putchar()
 *
 * @n: the integer to be printed
 */
void print_tens(int n)
{
	_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');
}
